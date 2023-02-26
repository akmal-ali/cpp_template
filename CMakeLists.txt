cmake_minimum_required(VERSION 3.0.0)
project(cpp_template VERSION 0.1.0)
SET(CMAKE_CXX_STANDARD 20)
add_compile_options(-fmodules-ts)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} main.cpp)
#target_precompile_headers(${PROJECT_NAME} PUBLIC main.hpp PRIVATE <iostream> )
target_precompile_headers(${PROJECT_NAME} PRIVATE <iostream> <fstream>)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
