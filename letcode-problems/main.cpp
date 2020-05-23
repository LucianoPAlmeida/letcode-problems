//
//  main.cpp
//  letcode-problems
//
//  Created by Luciano Almeida on 14/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#include <iostream>
#include <vector>
#include "two_sum.h"
#include "add_two_numbers.h"
#include "rotate.h"
#include "index.h"
#include "revert_int.h"
#include "valid_parens.h"
#include "reverse_string.h"
#include "range.h"

void twoSum() {
  auto result = TwoSum::twoSum({2, 7, 11, 15}, 9);
  std::cout << "Two sum: ";
  for (auto elem : result) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

void addTwoNumbers(std::vector<int> &l1, std::vector<int> &l2) {
  auto result = AddTwoNnumbers::addTwoNumbers(l1, l2);
  result->dump();
}

void addTwoNumbers() {
  std::vector<int> i1 = {9, 8};
  std::vector<int> i2 = {1};
  
  std::vector<int> i3 = {2,4,3};
  std::vector<int> i4 = {5,6,4};
  
  std::vector<int> i5 = {9};
  std::vector<int> i6 = {9};
  
  std::vector<int> i7 = {9};
  std::vector<int> i8 = {1, 9, 9, 9, 9, 9, 9};
  
  std::vector<int> i9 = {0,8,6,5,6,8,3,5,7};
  std::vector<int> i10 = {6,7,8,0,8,5,8,9,7};
  
  addTwoNumbers(i1, i2);
  addTwoNumbers(i3, i4);
  addTwoNumbers(i5, i6);
  addTwoNumbers(i7, i8);
  addTwoNumbers(i9, i10);

}

void rotate(std::vector<int> &nums, int k) {
  Rotate::rotate(nums, k);
  
  for (auto elem : nums) {
     std::cout << elem << " ";
  }
  std::cout << std::endl;
}

void rotate() {
  std::vector<int> v = {1,2,3,4,5,6,7};
  std::vector<int> v1 = {-1,-100,3,99};
  std::vector<int> v2 = {1, 2};
  std::vector<int> v3 = {1, 2, 3};


  rotate(v, 3);
  rotate(v1, 2);
  rotate(v2, 3);
  rotate(v3, 1);

}

void searchInsert() {
  std::vector<int> v = {1,3,4,5,6,7, 9, 10};
  std::cout << "idx: " << SearchInsert::searchInsert(v, 5) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 3) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 1) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 7) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 9) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 8) << std::endl;
  std::cout << "idx: " << SearchInsert::searchInsert(v, 2) << std::endl;

}

void revertInt() {
  std::cout << "int: " << Int::reverse(123) << std::endl;
  std::cout << "int: " << Int::reverse(-123) << std::endl;
  std::cout << "int: " << Int::reverse(120) << std::endl;

}

void parens() {
  std::string s = "{}(){";
  std::string s1 = "{}(){}";
  
  std::cout << "Is valid: " << Parens::isValid(s) << std::endl;
  std::cout << "Is valid: " << Parens::isValid(s1) << std::endl;

}

void range() {
  std::vector<int> v = {2, 2};
  std::vector<int> v1 = {1,3,4,5,6,6,6,7, 9, 10};
  
  auto result = Range::searchRange(v, 2);
  std::cout << "lowerBound: " << result[0] << ", upperBound: " << result[1] << std::endl;
  auto result1 = Range::searchRange(v1, 6);
  std::cout << "lowerBound: " << result1[0] << ", upperBound: " << result1[1] << std::endl;
}

void reverseString() {
  std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
  ReverseStr::reverseString(s);
  std::cout << "Reverse: ";
  for (auto c : s) {
    std::cout << c;
  }
  std::cout << std::endl;
}

int main(int argc, const char * argv[]) {

  twoSum();

  addTwoNumbers();

  rotate();

  searchInsert();

  revertInt();

  parens();

  reverseString();
  
  range();
  
  return 0;
}

