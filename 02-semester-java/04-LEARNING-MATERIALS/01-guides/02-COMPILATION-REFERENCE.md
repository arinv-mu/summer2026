# Java: Compilation, Build & Execution Reference

## Java Environment Setup

### Check Installation
```bash
# Check Java version
java -version

# Check compiler version
javac -version

# Check Gradle version
gradle --version

# Find Java home
/usr/libexec/java_home
```

## Compilation

### Compile Single File
```bash
# Compile .java to .class
javac HelloWorld.java

# Specify output directory
javac -d classes HelloWorld.java

# Compile multiple files
javac *.java
javac -d classes src/*.java
```

### Compile with Package Structure
```bash
# Directory structure
src/
├── com/
│   └── example/
│       ├── App.java
│       └── Utils.java

# Compile with package
javac -d out src/com/example/*.java

# Class path - how to find classes
javac -cp out:lib/* src/Main.java
```

### Compilation Flags
```bash
# Set source and target versions
javac -source 21 -target 21 Main.java

# Show warnings
javac -Xlint Main.java
javac -Xlint:all Main.java

# Include debug information
javac -g Main.java

# Verbose output
javac -verbose Main.java

# Show deprecation warnings
javac -deprecation Main.java
```

## Execution

### Run Compiled Class
```bash
# Navigate to parent of package or use -cp
java -cp . HelloWorld              # In same directory

# With package structure
java -cp out com.example.App      # From classes directory

# With classpath
java -cp classes:lib/dep.jar MainClass
```

### Runtime Options
```bash
# Show version
java -version

# Show system properties
java -XshowSettings:properties HelloWorld

# Increase heap memory
java -Xmx1G -Xms512M MainClass

# Debug mode
java -agentlib:jdwp=transport=dt_socket,server=y,suspend=y,address=5005 MainClass
```

## Gradle Build System

### Basic Commands
```bash
# View available tasks
gradle tasks

# Build project
gradle build

# Run application
gradle run

# Run tests
gradle test

# Clean build
gradle clean

# Create JAR file
gradle jar

# View dependencies
gradle dependencies

# Refresh dependencies
gradle build --refresh-dependencies
```

### Build Configuration (build.gradle)

**Minimal build.gradle**:
```gradle
plugins {
    id 'java'
    id 'application'
}

group = 'com.example'
version = '1.0-SNAPSHOT'

repositories {
    mavenCentral()
}

dependencies {
    testImplementation 'org.junit.jupiter:junit-jupiter-api:5.9.2'
    testRuntimeOnly 'org.junit.jupiter:junit-jupiter-engine:5.9.2'
    implementation 'com.google.guava:guava:31.1-jre'
}

application {
    mainClass = 'com.example.App'
}

tasks.named('test') {
    useJUnitPlatform()
}
```

### Gradle Wrapper
```bash
# Gradle wrapper (recommended for projects)
./gradlew build        # Uses gradle wrapper
./gradlew run
./gradlew test

# Create wrapper for project
gradle wrapper --gradle-version=8.0
```

## JAR Files

### Create JAR
```bash
# With Gradle
gradle jar

# With javac (command line)
jar cf myapp.jar *.class
jar cf myapp.jar -C classes .

# Executable JAR (requires manifest)
jar cfe myapp.jar com.example.Main *.class
```

### Run JAR File
```bash
# Simple JAR
java -jar app.jar

# JAR with main class in manifest
java -jar myapp.jar

# JAR with classpath
java -cp app.jar:lib/* com.example.Main

# With additional arguments
java -jar app.jar arg1 arg2
```

### JAR Inspection
```bash
# List contents
jar tf app.jar
jar tf app.jar | head -20

# View manifest
jar xf app.jar META-INF/MANIFEST.MF
cat META-INF/MANIFEST.MF
```

## Package Management

### Maven Central Repository
```bash
# Search for packages
# https://mvnrepository.com/

# Add to build.gradle
dependencies {
    implementation 'org.apache.commons:commons-lang3:3.12.0'
    implementation 'com.fasterxml.jackson.core:jackson-databind:2.15.0'
}
```

### Common Dependencies
```gradle
# Testing
testImplementation 'org.junit.jupiter:junit-jupiter-api:5.9.2'
testRuntimeOnly 'org.junit.jupiter:junit-jupiter-engine:5.9.2'

# Utilities
implementation 'com.google.guava:guava:31.1-jre'
implementation 'org.apache.commons:commons-lang3:3.12.0'

# JSON
implementation 'com.fasterxml.jackson.core:jackson-databind:2.15.0'

# Logging
implementation 'org.slf4j:slf4j-api:2.0.3'
implementation 'ch.qos.logback:logback-classic:1.4.6'

# Database
implementation 'com.mysql:mysql-connector-j:8.0.31'
```

## Testing with JUnit 5

### Run Tests
```bash
# Run all tests
gradle test

# Run specific test class
gradle test --tests com.example.AppTest

# Run specific test method
gradle test --tests com.example.AppTest.testMethod

# With verbose output
gradle test --info
```

### Test Output
```bash
# View test results
cat build/reports/tests/test/index.html  # Open in browser

# View test failures
gradle test --no-build-cache --rerun-tasks

# Run with debugging
gradle test --debug
```

### JUnit 5 Annotations
```java
@Test                          // Mark as test method
@BeforeEach                    // Run before each test
@AfterEach                     // Run after each test
@BeforeAll                     // Run once before all tests (static)
@AfterAll                      // Run once after all tests (static)
@DisplayName("description")    // Custom test name
@Disabled                      // Skip test
@ParameterizedTest             // Parameterized tests
@ValueSource(ints = {1,2,3})  // Test with multiple values
```

## Debugging

### IDE Debugging
```bash
# In VS Code, use Debugger for Java extension
# Set breakpoints and run in debug mode
# F5 to step, F10 to continue, etc.
```

### Command-Line Debugging (JDWP)
```bash
# Start program in debug mode
java -agentlib:jdwp=transport=dt_socket,server=y,suspend=y,address=5005 Main

# Connect debugger (in another terminal)
jdb -attach localhost:5005
```

### Common Debug Commands
```
stop [in <class>:<method>] - Set breakpoint
resume                      - Continue execution
step                        - Step into
next                        - Step over
list                        - List code
print <variable>            - Print variable value
locals                      - Show local variables
```

## Project Structure

### Standard Java Project Layout
```
project/
├── src/
│   └── main/
│       └── java/
│           └── com/example/
│               ├── App.java
│               └── Utils.java
├── src/test/java/
│   └── com/example/
│       └── AppTest.java
├── build.gradle
├── README.md
└── .gitignore
```

### Multi-Module Project
```
project/
├── settings.gradle         # Define modules
├── build.gradle            # Root config
├── module1/
│   ├── build.gradle
│   └── src/
├── module2/
│   ├── build.gradle
│   └── src/
└── shared/
    ├── build.gradle
    └── src/
```

---

**Next**: When you encounter compilation errors, check [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)!
