cmake_minimum_required(VERSION 3.5)

find_package(GTest)
if(NOT GTEST_FOUND)
   message(SEND_ERROR "ERROR: gtest not found")
endif()

set(BINARY ${CMAKE_PROJECT_NAME}_tst)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${BINARY} ${TEST_SOURCES})
include_directories(${CMAKE_SOURCE_DIR}/LibNumToHex/include ${GTEST_INCLUDE_DIRS})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} LibConvert ${GTEST_LIBRARIES} pthread)
