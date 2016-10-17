#include <gtest/gtest.h>
#include "triangle.h"

//////////////////////////////////
// ISOSCELES TRIANGLE EXAMPLE //
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

////THIS EXERCISE STARTS HERE

//STEP1: Write a test! (already provided below)

// Negative sides
TEST(Isosceles, IsNotIsoscelesIfAnySideIsNegative){


}

//STEP2: run 'make' in the command line
//       (will fail)

//STEP3: go to triangle.cpp and write ONLY the code that 
//       will make this test pass
//       then run 'make' in the command line


//STEP4: write another test, run 'make'


//STEP5: add ONLY the code that will make that test pass
//       then run 'make' 

//STEP6: refactor if needed


// REPEAT STEP 1-6 for each test, one by one until done

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
