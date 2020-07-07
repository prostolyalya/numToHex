#include <gtest/gtest.h>
#include <LibConvert/lib.h>

TEST(libTest, test1) {
    EXPECT_EQ (libConvert::convertDecToHex(12), "0x12");
    EXPECT_EQ (libConvert::convertHexToDec("12"), 18);
}
