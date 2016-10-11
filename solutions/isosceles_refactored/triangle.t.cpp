#include <gtest/gtest.h>
#include "triangle.h"

///////////////////////////////////
// ISOSCELES REFACTORED SOLUTION //
///////////////////////////////////    

TEST(ValidTriangle, IsValidIfPositiveSidesAlsoAdhereValidityFormula){
  EXPECT_TRUE(isValid(5, 4, 4));
  EXPECT_TRUE(isValid(25, 25, 25));
  EXPECT_TRUE(isValid(7, 10, 5));
  EXPECT_TRUE(isValid(3, 4, 5));
}

TEST(ValidTriangle, IsNotValidIfAnySideIsNegativeOrZero){
  EXPECT_FALSE(isValid(5, -4, 4));
  EXPECT_FALSE(isValid(-5, -4, -4));
  EXPECT_FALSE(isValid(-4, -4, -4)); 
}

TEST(ValidTriangle, IsNotValidIfPositiveSidesAlsoAdhereValidityFormula){
  EXPECT_FALSE(isValid(8, 5, 3));
  EXPECT_FALSE(isValid(2, -4, 4));
  EXPECT_FALSE(isValid(0, 2, 5));
}
// Test that checks that all sides being equal results to return true
TEST(Equilateral, IsEquilateralIfAllSidesEqual){
  EXPECT_TRUE(isEquilateral(4, 4, 4));
  EXPECT_TRUE(isEquilateral(24, 24, 24));
}

// Test that checks that all unequal side lengths return false
TEST(Equilateral, IsNotEquilateralIfAnySideIsNotEqualToTheOthers){
  EXPECT_FALSE(isEquilateral(3, 4, 5));

}

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

// Test that checks that two sides being equal results to return true
TEST(Isosceles, IsIsoscelesIfTwoSidesEqual){
  EXPECT_TRUE(isIsosceles(4, 4, 3));
  EXPECT_TRUE(isIsosceles(3, 5, 3));
  EXPECT_TRUE(isIsosceles(3, 3, 3)); //equilateral is also isosceles
}

// Test that checks that all unequal side lengths return false
TEST(Isosceles, IsNotIsoscelesIfNoTwoSidesEqual){
  EXPECT_FALSE(isIsosceles(4, 6, 3));
  EXPECT_FALSE(isIsosceles(1, 2, 3));
}
// Negative sides
TEST(Isosceles, IsNotIsoscelesIfAnySideIsNegative){
  EXPECT_FALSE(isIsosceles(5, -4, 4));
  EXPECT_FALSE(isIsosceles(-5, -4, -4));
  EXPECT_FALSE(isIsosceles(-4, -4, -4)); //equal but negative!
}

//Test that checks for validity formula a+b>c for all sides
TEST(Isosceles, IsNotIsoscelesIfNotValidTriangle){
  EXPECT_FALSE(isIsosceles(5, 8, 3));
  EXPECT_FALSE(isIsosceles(1, 2, 3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
