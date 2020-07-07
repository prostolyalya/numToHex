cmake_minimum_required(VERSION 3.5)
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib)
project(numToHex LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/LibNumToHex)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/LibNumToHex/include)

add_executable(numToHex main.cpp)

target_link_libraries(numToHex LibConvert)
