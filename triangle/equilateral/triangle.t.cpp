#include <gtest/gtest.h>
#include "triangle.h"

//////////////////////////////////
// EQUILATERAL TRIANGLE EXAMPLE //
/////////////////////////////////    

//STEP1: Write a test! (already provided below)

// Test that checks for negative sides
TEST(Equilateral, IsNotEquilateralIfAnySideIsNegative){
  EXPECT_FALSE(isEquilateral(5, -4, 4));
  EXPECT_FALSE(isEquilateral(-5, -4, -4));
  EXPECT_FALSE(isEquilateral(-4, -4, -4)); //equal but negative!
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
