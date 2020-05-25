//
//  dup_sorted.h
//  letcode-problems
//
//  Created by Luciano Almeida on 25/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef dup_sorted_h
#define dup_sorted_h

#include <iostream>
#include <vector>

class DupSorted {
public:
  static int removeDuplicates(std::vector<int>& nums) {
      if (nums.size() <= 1) return (int)nums.size();
      
      int cur = nums.front();
      for (unsigned i = 0; i < nums.size(); i++) {
          
          
          while (i + 1 < nums.size() && nums[i + 1] == cur) {
              nums.erase(nums.begin() + i + 1);
          }
          
          if (i + 1 >= nums.size())
              break;
          
          cur = nums[i + 1];
      }
      return (int)nums.size();
  }
};

#endif /* dup_sorted_h */
