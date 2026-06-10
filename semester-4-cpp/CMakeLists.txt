cmake_minimum_required(VERSION 3.20)
project(semester-4-cpp CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g")

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
file(GLOB SOURCES "coursework/**/*.cpp" "exercises/**/*.cpp" "projects/**/*.cpp")

# Create executables for each source file
foreach(source ${SOURCES})
    get_filename_component(target_name ${source} NAME_WE)
    add_executable(${target_name} ${source})
endforeach()

# Optional: Link libraries
# target_link_libraries(game-engine sfml-graphics sfml-window sfml-system)
# target_link_libraries(graphics-renderer sfml-graphics sfml-window sfml-system)
