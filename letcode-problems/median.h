//
//  median.h
//  letcode-problems
//
//  Created by Luciano Almeida on 25/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef median_h
#define median_h

#include <iostream>
#include <vector>

class Median {
private:
  static size_t searchInsert(vector<int>& nums, size_t start, size_t end, int value) {
    size_t i = end - start;
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
  static size_t searchInsert(vector<int>& nums, int target) {
    if (target <= nums.front())
      return 0;
    if (target > nums.back())
      return nums.size();
    
    if (nums.size() == 1) {
      return nums.front() < target ? 1 : 0;
    }
    
    return searchInsert(nums, 0, nums.size(), target);
  }
  
  static double median(vector<int>& nums1, vector<int>& nums2) {
    if (!nums2.empty()) {
      for (unsigned int i = 0; i < nums2.size(); i++) {
        size_t idx = searchInsert(nums1, nums2[i]);
        nums1.insert(nums1.begin() + idx, nums2[i]);
      }
    }
    
    if (nums1.size() == 1)
      return (double)nums1.front();
    
    auto m = nums1.size()/2;
    if (nums1.size()%2 != 0) {
      return nums1[m];
    }
    return (nums1[m] + nums1[m - 1])/2.0;
  }
  
public:
  static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
      return median(nums1, nums2);
    }
    
    return median(nums2, nums1);
  }
};

#endif /* median_h */
