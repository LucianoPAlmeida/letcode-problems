//
//  range.h
//  letcode-problems
//
//  Created by Luciano Almeida on 22/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef range_h
#define range_h

#include <iostream>
#include <vector>

class Range {
  static std::pair<int, int> searchRange(vector<int>& nums, int start, int end, int value) {
    int i = end - start;
    if (i <= 1) {
      if (nums[start] == value) {
          return {start, start};
      } else if (end < nums.size() && nums[end] == value) {
          return {end, end};
      }
      return { -1, -1};
    }

    i = i/2;
    
    int m = nums[start + i];
    if (value < m) {
      return searchRange(nums, start, start + i, value);
    } else if (value > m) {
      return searchRange(nums, start + i, end, value);
    } else {
      int lowerBound = start + i;
      int upperBound = lowerBound;
      while (lowerBound >= 0 && nums[lowerBound] == value) {
        lowerBound--;
      }
      while (upperBound < nums.size() && nums[upperBound] == value) {
        upperBound++;
      }
      return {lowerBound + 1, upperBound - 1};
    }
  }
public:
  static vector<int> searchRange(vector<int>& nums, int target) {
    if (nums.empty())
      return {-1, -1};

    auto result = searchRange(nums, 0, (int)nums.size(), target);
    return {result.first, result.second};
  }
};
#endif /* range_h */
