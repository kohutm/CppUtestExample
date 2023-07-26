
add_library(${TST_TARGET} test.cpp)

target_include_directories(${TST_TARGET}
    PUBLIC
    ../inc)

add_executable(${ALL_TARGET} test_run.cpp)

target_include_directories(${ALL_TARGET} 
    PUBLIC 
    /usr/local/include/CppUTest
    ../inc)

target_link_libraries(${ALL_TARGET} /usr/local/lib/libCppUTest.a ${TST_TARGET} ${APP_TARGET})
add_custom_target(test ALL
    COMMAND ./utest_all
    DEPENDS ${ALL_TARGET}
    VERBATIM)
#add_custom_command(TARGET ${ALL_TARGET} POST_BUILD COMMAND ./tst/utest_all)