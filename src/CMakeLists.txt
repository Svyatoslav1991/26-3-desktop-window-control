cmake_minimum_required (VERSION 3.8)

project ("26-3-desktop-window-control")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(26-3-desktop-window-control "main.cpp" ${MY_INCLUDE_DIR}/functions.h ${MY_INCLUDE_DIR}/window.h "window.cpp" ${MY_INCLUDE_DIR}/screen.h "screen.cpp")

target_include_directories(26-3-desktop-window-control PUBLIC ${CMAKE_SOURCE_DIR}/include)