cmake_minimum_required(VERSION 3.5)

project(numToHex LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${numToHex_SOURCE_DIR}/LibNumToHex)
include_directories(${numToHex_SOURCE_DIR}/LibNumToHex/include)
add_executable(numToHex main.cpp)
target_link_libraries(numToHex LibConvert)
