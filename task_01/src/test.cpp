#include <gtest/gtest.h>

#include <median.hpp>

TEST(Test, Simple) { ASSERT_EQ(median(1, 2, 3), 2); }
TEST(Test, Simple) { ASSERT_EQ(median(9, 1, 3), 3); }