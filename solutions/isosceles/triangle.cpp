#include "triangle.h"

bool isEquilateral(int side_a, int side_b, int side_c){

  //check if it is a valid triangle

  //check for negative sides
  if (side_a < 0 || side_b < 0 || side_c <0){
    return false;
  }
  //check if valid according to the validity rule
  if (!(side_a + side_b > side_c &&
      side_a + side_c > side_b &&
      side_b + side_c > side_a )){
    return false;
  }

  if (side_a == side_b && side_b == side_c){
    return true;
  }
    return false;
}

bool isIsosceles(int side_a, int side_b, int side_c){

  //check if it is a valid triangle

  //check for negative sides
  if (side_a < 0 || side_b < 0 || side_c <0){
    return false;
  }
  //check if valid according to the validity rule
  if (!(side_a + side_b > side_c &&
      side_a + side_c > side_b &&
      side_b + side_b > side_a )){
    return false;
  }

  if (side_a == side_b ||  side_b == side_c || side_a == side_c){
    return true;
  }
    return false;
}

