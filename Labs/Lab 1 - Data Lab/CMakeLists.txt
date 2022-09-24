cmake_minimum_required(VERSION 3.23)
project(CSC240 C)

set(CMAKE_C_STANDARD 11)

include_directories(".")

add_executable(CSC240
        "bits.c"
        "bits.h"
        "btest.c"
        "btest.h"
        "decl.c"
        "fshow.c"
        "ishow.c"
        "tests.c")
