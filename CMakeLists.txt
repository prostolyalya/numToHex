cmake_minimum_required(VERSION 3.5)

project(numToHex LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(numToHex main.cpp)
add_subdirectory(LibNumToHex)
#add_library(MyLibrary OBJECT LibNumToHex/header/lib.h LibNumToHex/source/lib.cpp)
#target_link_libraries(numToHex lib)
#target_sources(numToHex LibNumToHex/source/lib.cpp)
##target_
##add_subd
#SET(TARGET_H
#    LibNumToHex/header/lib.h)
#SET(TARGET_SRC
#    LibNumToHex/source/lib.cpp)
