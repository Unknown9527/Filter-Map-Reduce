#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// remain even number in reslt
TEST(RemainEvenTest0, RemainEvenTest0) {
  Solution solution;

  vector<int> input0 = {1,2,3,4,5,6,7,8,9}; 
  
  vector<int> result0= {2,4,6,8};
 
  EXPECT_EQ(solution.FilterOdd(input0), result0);
}

// remain even number in reslt
TEST(RemainEvenTest1, RemainEvenTest1) {
  Solution solution;

  vector<int> input1 = {3,1,4,1,5,9,2,6,5,3,5,8}; 
  
  vector<int> result1= {4,2,6,8};
 
  EXPECT_EQ(solution.FilterOdd(input1), result1);
}

// output square
TEST(IntSquareTest2, IntSquareTest2) {
  Solution solution;

  vector<int> input2 = {1,2,3,4,5}; 
  
  vector<int> result2= {1,4,9,16,25};
 
  EXPECT_EQ(solution.IntSquare(input2), result2);
}

// output square
TEST(IntSquareTest3, IntSquareTest3) {
  Solution solution;

  vector<int> input3 = {3,4,7,8,9}; 
  
  vector<int> result3= {9,16,49,64,81};
 
  EXPECT_EQ(solution.IntSquare(input3), result3);
}

// sum up
TEST(AccumulationTest4, AccumulationTest4) {
  Solution solution;

  vector<int> input4 = {1,2,3,4,5}; 
  
  int result4 = 15;
 
  EXPECT_EQ(solution.VecAccumulate(input4), result4);
}

// sum up
TEST(AccumulationTest5, AccumulationTest5) {
  Solution solution;

  vector<int> input5 = {3,1,4,1,5,9,2,6,5,3,5,8,9,7}; 
  
  int result5 = 68;
 
  EXPECT_EQ(solution.VecAccumulate(input5), result5);
}