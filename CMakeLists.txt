cmake_minimum_required(VERSION 3.15)
project(SystemProgrammingOdyssey)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")

add_subdirectory(tasks/01-basics)
add_subdirectory(tasks/02-oop-stl)
add_subdirectory(tasks/03-templates-advanced)
add_subdirectory(tasks/04-system-programming)
add_subdirectory(tasks/05-hacking-advanced)