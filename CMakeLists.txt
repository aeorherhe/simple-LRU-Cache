cmake_minimum_required(VERSION 3.29)
project(LRU_cache)

set(CMAKE_CXX_STANDARD 20)


add_executable(LRU_cache main.cpp
        LRUCache.cpp
        LRUCache.h)
