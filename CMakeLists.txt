cmake_minimum_required(VERSION 3.10.0)
project(snakeminal VERSION 0.1.0 LANGUAGES C CXX)

find_package(Curses REQUIRED)

add_executable(snakeminal main.cpp)

target_include_directories(snakeminal PRIVATE ${CURSES_INCLUDE_DIR})
target_link_libraries(snakeminal PRIVATE ${CURSES_LIBRARIES})
