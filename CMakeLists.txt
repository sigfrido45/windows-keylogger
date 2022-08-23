cmake_minimum_required(VERSION 3.23)
project(keylogger)

set(CMAKE_CXX_STANDARD 20)

add_executable(keylogger main.cpp keyboard/keys.h keyboard/keys.cpp)
