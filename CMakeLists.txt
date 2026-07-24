cmake_minimum_required(VERSION 3.10)
project(Mouse5Clicker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CS2-Spamer main.cpp)

if(MINGW)
    set_target_properties(CS2-Spamer PROPERTIES 
        COMPILE_FLAGS "-O3"
        LINK_FLAGS "-static-libgcc -static-libstdc++ -static -s"
    )
endif()