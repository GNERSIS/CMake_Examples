cmake_minimum_required(VERSION 4.0)
project(MyProject VERSION 2.4.7.10)

# Professional CMake Chapter 17: Language Requirements presents a different way of using
# CMAKE_CXX_STANDARD by first querying if a top-level project already defined it,
# which in modern apps is almost alwaysthe case

# Require C++20, but let a parent project ask for something higher

if (DEFINED CMAKE_CXX_STANDARD)
    if (CMAKE_CXX_STANDARD EQUAL 98 OR CMAKE_CXX_STANDARD LESS 20)
        message(FATAL_ERROR "This project requires at least C++20")
    endif ()
else ()
    set(CMAKE_CXX_STANDARD 20)
endif ()

# Always enforce the language constraint
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# We don't need compiler extensions, but let a parent ask for them
if (NOT DEFINED CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif ()