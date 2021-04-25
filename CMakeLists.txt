
cmake_minimum_required (VERSION 3.8)

project(store)

include_directories(include)

file(GLOB_RECURSE MAIN "main.cpp")

file(GLOB_RECURSE HEADER "include/*.hpp")

file(GLOB_RECURSE SOURCE "src/*.cpp")

#set(EXECUTABLE_OUTPUT_PATH "build")

add_executable (store ${MAIN} ${SOURCE} ${HEADER})

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

set(CMAKE_SYSTEM_PROGRAM_PATH bin )

