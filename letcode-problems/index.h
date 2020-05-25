//
//  median.h
//  letcode-problems
//
//  Created by Luciano Almeida on 19/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef index_h
#define index_h

#include <iostream>
#include <vector>

using namespace std;

class SearchInsert {
private:
  static int searchInsert(vector<int>& nums, int start, int end, int value) {
    int i = end - start;
    if (i <= 1)
      return start + i;

    i = i/2;
    
    int m = nums[start + i];
    if (value < m) {
      return searchInsert(nums, start, start + i, value);
    } else if (value > m) {
      return searchInsert(nums, start + i, end, value);
    } else {
      return start + i;
    }
  }
public:
  static int searchInsert(vector<int>& nums, int target) {
    if (target <= nums.front())
      return 0;
    if (target > nums.back())
      return (int)nums.size();
    
    if (nums.size() == 1) {
      return nums.front() < target ? 1 : 0;
    }
    
    return searchInsert(nums, 0, (int)nums.size(), target);
  }
  
};

#endif /* median_h */
