cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 api/main.cpp
        api/menu.h
        api/work.h
        api/app.h
        api/log.h
        api/menu.cpp
        api/app.cpp
        api/log.cpp)
include_directories(api)