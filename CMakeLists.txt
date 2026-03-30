cmake_minimum_required(VERSION 3.21)
project(libass_android_test)

# Create the shared library
add_library(ass_test SHARED
    src/main.cpp
)

find_package(PkgConfig)

# # Link against libass
# pkg_check_modules(ass REQUIRED IMPORTED_TARGET GLOBAL libass)
# target_link_libraries(ass_test PRIVATE PkgConfig::ass)

# # Link against c++
# target_link_libraries(ass_test PRIVATE c++)