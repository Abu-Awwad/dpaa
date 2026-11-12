
cmake_minimum_required(VERSION 3.20)

project(Download_Abu_Awwad LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Download_Abu_Awwad
    src/main.cpp
    src/interface.cpp
    src/security.cpp
)

target_compile_options(Download_Abu_Awwad PRIVATE
    -Wall
    -Wextra
)

target_compile_definitions(Download_Abu_Awwad PRIVATE
    APP_NAME="Download Abu Awwad"
    APP_AUTHOR="Abu Awwad"
    APP_DISCORD=".qqmi"
)
