#include <gtest/gtest.h>

TEST(PlusTest, BasicAssertions)
{
    EXPECT_EQ(1 + 1, 2);
    EXPECT_EQ(1 + 2, 3);
}
