cmake_minimum_required(VERSION 3.21)
project(android_ndk_test)

# Create the shared library
add_library(ndktest SHARED
    src/main.cpp
)

# Link against c++
target_link_libraries(ndktest PRIVATE c++)