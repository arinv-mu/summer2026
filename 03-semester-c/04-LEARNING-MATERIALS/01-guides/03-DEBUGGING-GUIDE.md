# Debugging Scenarios & Solutions

Common issues when learning C and how to debug them.

---

## Scenario 1: Program Crashes Immediately

**Symptom:** Program runs but crashes with no error message or `Segmentation fault`

**Possible Causes:**
1. Dereferencing NULL pointer
2. Array out of bounds
3. Uninitialized pointer

**Debugging Steps:**

```bash
# Step 1: Compile with debug symbols
gcc -Wall -Wextra -std=c99 -g -o program program.c

# Step 2: Run with Valgrind first (detects invalid memory access)
valgrind --leak-check=full ./program

# Step 3: If Valgrind shows issues, use GDB
gdb ./program
(gdb) run
# ... program crashes ...
(gdb) backtrace          # Shows which function crashed
(gdb) frame 0            # Examine the frame
(gdb) print variable     # Check variable values
(gdb) quit
```

**Example Valgrind Output:**
```
Invalid read of size 4
   at 0x...: main (program.c:25)
 Address 0x... is 0 bytes inside a block of size X free'd
```

**Fix:** Check line 25 in program.c - likely accessing freed memory or NULL pointer.

---

## Scenario 2: Wrong Output or Logic Errors

**Symptom:** Program runs but produces incorrect results

**Debugging Steps:**

```bash
# Add debug print statements
printf("DEBUG: variable_name = %d\n", variable_name);

// Or use preprocessor for conditional debugging:
#ifdef DEBUG
printf("DEBUG: x = %d, y = %d\n", x, y);
#endif
```

**Compile with DEBUG flag:**
```bash
gcc -Wall -Wextra -std=c99 -DDEBUG -o program program.c
```

**Use GDB to step through code:**
```bash
gdb ./program
(gdb) break main
(gdb) run
(gdb) step          # Execute line by line
(gdb) print x       # Check values after each step
(gdb) continue      # Jump to next breakpoint
```

**Example GDB Session:**
```
(gdb) break main
(gdb) run
Breakpoint 1, main () at program.c:10
10      int x = 5;
(gdb) step
11      int y = x * 2;
(gdb) print x
$1 = 5
(gdb) step
12      printf("%d\n", y);
(gdb) print y
$2 = 10
(gdb) continue
```

---

## Scenario 3: Memory Leaks

**Symptom:** Program runs fine but Valgrind reports memory leaks

**Example Valgrind Output:**
```
definitely lost: 1,024 bytes in 1 blocks
   at 0x...: malloc (vg_replace_malloc.c:299)
   by 0x...: main (program.c:15)
```

**Debugging Process:**

```bash
# 1. Compile with debug symbols
gcc -Wall -Wextra -std=c99 -g -o program program.c

# 2. Run full Valgrind check
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./program

# 3. Identify line where malloc occurred (program.c:15 in example)

# 4. Check if that malloc has corresponding free()
```

**Common Memory Leak Patterns:**

```c
// ❌ LEAK: Memory allocated but never freed
int* arr = (int*)malloc(100 * sizeof(int));
printf("Array[0] = %d\n", arr[0]);
return 0;  // Memory leaked!

// ✅ FIX: Free allocated memory
int* arr = (int*)malloc(100 * sizeof(int));
printf("Array[0] = %d\n", arr[0]);
free(arr);
arr = NULL;  // Good practice
return 0;

// ❌ LEAK: Allocated in loop, never freed
for (int i = 0; i < 10; i++) {
    int* temp = (int*)malloc(sizeof(int));
    // ... use temp ...
    // Forgot to free(temp)!
}

// ✅ FIX: Free inside loop
for (int i = 0; i < 10; i++) {
    int* temp = (int*)malloc(sizeof(int));
    // ... use temp ...
    free(temp);
}
```

---

## Scenario 4: String Handling Issues

**Symptom:** Garbage characters in string output or program crash

**Common Issues:**

```c
// ❌ PROBLEM: Buffer overflow
char str[5];
scanf("%s", str);  // User enters "Hello" (5+ chars) -> overflow!

// ✅ FIX: Limit input
char str[5];
scanf("%4s", str);  // Read max 4 chars

// ❌ PROBLEM: Uninitialized string
char* str;
strcpy(str, "hello");  // str points to random memory!

// ✅ FIX: Allocate memory first
char str[20];
strcpy(str, "hello");  // Now safe

// Or use dynamic allocation:
char* str = (char*)malloc(20);
strcpy(str, "hello");
free(str);

// ❌ PROBLEM: String comparison with ==
if (str == "hello")  // Always false! Compares pointers, not content

// ✅ FIX: Use strcmp()
if (strcmp(str, "hello") == 0)  // Correct
```

**Debugging String Issues:**

```bash
# Add boundary checks
#include <string.h>

char buffer[20];
int max_len = sizeof(buffer) - 1;  // Leave room for '\0'

printf("Enter text (max %d chars): ", max_len);
fgets(buffer, max_len + 1, stdin);  // fgets is safer than scanf
```

---

## Scenario 5: Array Out of Bounds

**Symptom:** Accessing array beyond its size, causing crashes or garbage values

**Example:**
```c
// ❌ PROBLEM
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i <= 5; i++) {  // i goes 0,1,2,3,4,5 - off by one!
    printf("%d\n", arr[i]);     // arr[5] is out of bounds
}

// ✅ FIX: Use correct loop condition
for (int i = 0; i < 5; i++) {   // i goes 0,1,2,3,4 - correct!
    printf("%d\n", arr[i]);
}

// ✅ Better: Use array length
int len = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
}
```

**Debugging with Valgrind:**
```bash
valgrind ./program

# Output will show:
# Invalid read of size 4
#    at 0x...: main (program.c:12)
# Address 0x... is 0 bytes after a block of size 20 alloc'd
```

---

## Scenario 6: Infinite Loops or Program Hangs

**Symptom:** Program runs but never terminates

**Common Causes:**
```c
// ❌ PROBLEM: Loop never terminates
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    // Forgot i++!
}

// ✅ FIX
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}

// ❌ PROBLEM: Wrong condition
while (i = 10) {  // Assignment, not comparison!
    printf("%d\n", i);
}

// ✅ FIX
while (i == 10) {  // Comparison
    printf("%d\n", i);
}
```

**Debug Infinite Loop:**
```bash
# Run with timeout
timeout 5 ./program  # Kill if still running after 5 seconds

# Or use GDB with breakpoints
gdb ./program
(gdb) break program.c:10  # Set breakpoint in loop
(gdb) run
(gdb) step                # Step through a few times
(gdb) print i             # Check loop variable
```

---

## Scenario 7: scanf() Not Reading Input Correctly

**Symptom:** scanf() skips input or behaves unexpectedly

**Common Issues:**
```c
// ❌ PROBLEM: newline left in buffer after scanf
int age;
char name[50];

scanf("%d", &age);      // Reads number, leaves '\n' in buffer
scanf("%s", name);      // Reads with leading '\n' from buffer!

// ✅ FIX: Add space before format specifier
scanf("%d", &age);
scanf(" %s", name);     // Space skips leading whitespace

// Better alternative: Use fgets
scanf("%d", &age);
fgets(name, sizeof(name), stdin);  // Includes newline, safer

// ❌ PROBLEM: No input buffer clearing
scanf("%d", &x);
scanf("%d", &y);  // If input is invalid, y gets garbage

// ✅ FIX: Clear input buffer
scanf("%d", &x);
while (getchar() != '\n');  // Clear buffer
scanf("%d", &y);

// Or use fgets with parsing
char line[100];
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &x);
```

---

## Scenario 8: Memory Alignment and Struct Issues

**Symptom:** struct size larger than expected, or memory access errors

```c
// ❌ UNEXPECTED: struct size is 12 bytes (not 8!)
struct Point {
    int x;      // 4 bytes
    char y;     // 1 byte (+ 3 bytes padding)
    int z;      // 4 bytes
};  // Total: 4 + 4 + 4 = 12 bytes

// ✅ OPTIMIZED: Reorder to minimize padding
struct Point {
    int x;      // 4 bytes
    int z;      // 4 bytes
    char y;     // 1 byte (+ 3 bytes padding)
};  // Total: 4 + 4 + 4 = 12 bytes

// Check struct size
printf("Size of Point: %lu\n", sizeof(struct Point));
```

---

## Debugging Tools Cheat Sheet

| Task | Command |
|------|---------|
| Find memory leaks | `valgrind --leak-check=full ./program` |
| Debug step-by-step | `gdb ./program` then `run`, `step`, `print var` |
| Check array bounds | Add assertions: `assert(i < arr_size);` |
| View assembly | `gcc -S program.c` → `program.s` |
| Check compilation warnings | `gcc -Wall -Wextra -Werror program.c` |
| Measure performance | `time ./program` |
| Test different input | `echo "input" \| ./program` |
| Redirect output to file | `./program > output.txt 2>&1` |

---

## Tips for Effective Debugging

1. **Compile with all warnings enabled**
   ```bash
   gcc -Wall -Wextra -Werror -std=c99 -g -o program program.c
   ```

2. **Add debug print statements strategically**
   ```c
   fprintf(stderr, "DEBUG: x = %d, y = %d\n", x, y);
   ```

3. **Use Valgrind early and often**
   ```bash
   valgrind --leak-check=full ./program
   ```

4. **Test edge cases**
   - Empty arrays, zero values, negative numbers
   - Maximum integer/array values
   - NULL pointers

5. **Use version control**
   - Commit before major changes
   - Revert to last working version if needed

6. **Rubber duck debugging**
   - Explain your code line-by-line to someone (or a rubber duck!)
   - Often reveals logic errors

---

**See: COMPILATION-REFERENCE.md for more debugging commands**
