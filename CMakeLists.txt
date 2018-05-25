cmake_minimum_required(VERSION 3.7)
project(mode)
include_directories("D:/WORK/CLionWorkSpace/mylib")
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp modulemethod.cpp modulemethod.h adapter.cpp adapter.h observer.cpp observer.h strategy.cpp strategy.h proxy.cpp proxy.h factory.cpp factory.h builder.cpp builder.h decorator.cpp decorator.h)
add_executable(mode ${SOURCE_FILES})
