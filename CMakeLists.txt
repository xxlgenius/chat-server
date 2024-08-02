cmake_minimum_required(VERSION 3.5.0)
project(
    chat-server
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/CODspielen/cmake_planning_demo"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)
enable_testing()
# 设置的路径可以传递给子目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
#设置子项目路径
set(Hello_DIR ${CMAKE_SOURCE_DIR}/src/hello)
set(Web_DIR ${CMAKE_SOURCE_DIR}/src/web)

add_subdirectory(src)
add_subdirectory(test/maintest)
