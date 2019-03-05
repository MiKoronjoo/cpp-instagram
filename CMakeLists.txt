cmake_minimum_required(VERSION 3.12)
project(HW_instagram)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW_instagram
        Profile.cpp
        User.cpp
        DataBase.cpp
        main.cpp)