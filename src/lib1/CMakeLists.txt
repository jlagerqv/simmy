cmake_minimum_required(VERSION 3.7)

set(SHARED_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(SHARED_LIB_INCLUDE_DIR ${SHARED_LIB_INCLUDE_DIR} PARENT_SCOPE)

if(TARGET shared_lib)

	message("shared_lib is already defined")

else()

	include_directories(${SHARED_LIB_INCLUDE_DIR})

	set(LIB_SRCS lib1.cpp)

	add_library(lib1 STATIC ${LIB_SRCS})

endif()
