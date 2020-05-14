//
//  two_sum.h
//  letcode-problems
//
//  Created by Luciano Almeida on 14/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef two_sum_h
#define two_sum_h

#include <iostream>
#include <vector>

class TwoSum {
public:
  static std::vector<int> twoSum(std::vector<int> nums, int target) {
    for (unsigned i = 0; i < nums.size(); i++) {
      for (unsigned j = i + 1; j < nums.size(); j++) {
        
        if (nums[i] + nums[j] == target) {
          return {static_cast<int>(i) , static_cast<int>(j)};
        }
      }
    }
    return {};
  }
};

#endif /* two_sum_h */
