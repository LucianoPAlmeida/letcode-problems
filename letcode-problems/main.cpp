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

void twoSum() {
  auto result = TwoSum::twoSum({2, 7, 11, 15}, 9);
  std::cout << "Two sum: ";
  for (auto elem : result) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

void addTwoNumbers(std::vector<int> l1, std::vector<int> l2) {
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


int main(int argc, const char * argv[]) {
  
  twoSum();
  
  addTwoNumbers();
  
  return 0;
}

