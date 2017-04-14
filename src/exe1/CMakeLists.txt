cmake_minimum_required(VERSION 3.7)


include_directories(../lib1)

set(SRCS exe1.cpp)
add_executable(exe1 ${SRCS})
target_link_libraries(exe1 lib1)
