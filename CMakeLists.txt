cmake_minimum_required(VERSION 3.20)
project(RPN_Calculator VERSION 0.1 LANGUAGES CXX)

set(CMake_CXX_STANDARD 20)
set(CMake_CXX_STANDART_REQUIRED ON)

include_directories(include)

add_executable(rpn_calculator src/main.cpp src/rpn.cpp)
set_target_properties(rpn_calculator PROPERTIES
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)


enable_testing()
add_subdirectory(tests)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")