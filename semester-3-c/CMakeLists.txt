cmake_minimum_required(VERSION 3.20)
project(semester-3-c C)

# Set C standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -g")

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
file(GLOB SOURCES "coursework/**/*.c" "exercises/**/*.c" "projects/**/*.c")

# Create executables for each source file
foreach(source ${SOURCES})
    get_filename_component(target_name ${source} NAME_WE)
    add_executable(${target_name} ${source})
endforeach()

# Optional: Add custom targets for specific programs
# add_executable(hello coursework/fundamentals/hello.c)
# add_executable(calculator projects/simple-calc/calculator.c)
