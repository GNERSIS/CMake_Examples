cmake_minimum_required(VERSION 4.0)
project(MyProject VERSION 2.4.7.10)

configure_file(version.cpp.in version.cpp @ONLY)

add_library(MyProjectVersion STATIC
        ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
)

target_include_directories(MyProjectVersion
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

add_executable(version main.cpp)
target_link_libraries(version PRIVATE MyProjectVersion)
