#include "CppUTest/TestHarness.h"

extern "C"
{
#include "main.h"
}

TEST_GROUP(Main)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(Main, returns_1)
{
    LONGS_EQUAL(1, main_src(1));
}