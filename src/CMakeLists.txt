cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
set(CMAKE_C_COMPILER /usr/bin/gcc-8)
set(CMAKE_CXX_COMPILER /usr/bin/g++-8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_FIND_LIBRARY_PREFIXES lib)
set(CMAKE_FIND_LIBRARY_SUFFIXES .so)
set(BOOST_LIBRARYDIR /usr/lib/x86_64-linux-gnu)
project(cpp-web-app LANGUAGES CXX)
add_executable(cpp-web-app cpp-web-app.cpp)
find_package(Boost
  1.65
  REQUIRED
  COMPONENTS system
)
target_link_libraries(cpp-web-app PUBLIC ${Boost_LIBRARIES} uuid stdc++fs pthread)