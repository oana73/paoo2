cmake_minimum_required(VERSION 3.10)

project(Main VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(clothes)
add_subdirectory(jeans)
add_subdirectory(socks)

add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC jeans)
target_link_libraries(Main PUBLIC socks)
target_link_libraries(Main PUBLIC clothes)


target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/jeans" "${PROJECT_SOURCE_DIR}/socks" "${PROJECT_SOURCE_DIR}/clothes")
