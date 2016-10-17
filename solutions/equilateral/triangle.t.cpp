#include <gtest/gtest.h>
#include "triangle.h"

//////////////////////////////////
// EQUILATERAL TRIANGLE SOLUTION //
/////////////////////////////////    

// Negative sides
TEST(Equilateral, IsNotEquilateralIfAnySideIsNegative){
  EXPECT_FALSE(isEquilateral(5, -4, 4));
  EXPECT_FALSE(isEquilateral(-5, -4, -4));
  EXPECT_FALSE(isEquilateral(-4, -4, -4)); //equal but negative!
}

//Test that checks for validity formula a+b>c for all sides
TEST(Equilateral, IsNotEquilateralIfNotValidTriangle){
  EXPECT_FALSE(isEquilateral(5, 8, 3));
  EXPECT_FALSE(isEquilateral(1, 2, 3));
}

// Test that checks that all unequal side lengths return false
TEST(Equilateral, IsNotEquilateralIfAnySideIsNotEqualToTheOthers){
  EXPECT_FALSE(isEquilateral(3, 4, 5));
}

// Test that checks that all sides being equal results to return true
TEST(Equilateral, IsEquilateralIfAllSidesEqual){
  EXPECT_TRUE(isEquilateral(4, 4, 4));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
