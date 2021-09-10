cmake_minimum_required(VERSION 3.0.0)
project(CppHashSOP VERSION 0.1.1)

include(CTest)
enable_testing()

add_subdirectory(src)

find_package(SDL2 CONFIG REQUIRED)
add_executable(CppHashSOP main.cpp)
target_link_libraries(CppHashSOP PRIVATE src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
