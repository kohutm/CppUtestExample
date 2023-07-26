cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_COMPILER g++)
set(APP_TARGET "utest_app")
set(TST_TARGET "utest_tst")
set(ALL_TARGET "utest_all")

project(unit_test)

add_subdirectory(src)
add_subdirectory(tst)