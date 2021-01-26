cmake_minimum_required(VERSION 3.10.2)

project(algs4-ex)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsigned-char")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-strict-aliasing")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstack-protector-all")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wformat=2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-label")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-value")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-variable")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-function")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-parameter")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-Wl,-z,noexecstack'")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-Wl,-z,relro'")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-Wl,-z,now'")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-Wl,--no-undefined'")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-pie'")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} '-fsanitize=address'")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(
    common/include
    ch1_fundamentals/include
    ch2_sorting/include
    ch3_searching/include
    ch4_graphs/include
    ch5_strings/include
    ch6_context/include
)

add_subdirectory(common)
add_subdirectory(ch1_fundamentals)
add_subdirectory(ch2_sorting)
add_subdirectory(ch3_searching)
add_subdirectory(ch4_graphs)
add_subdirectory(ch5_strings)
add_subdirectory(ch6_context)