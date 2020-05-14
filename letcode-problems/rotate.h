//
//  rotate.h
//  letcode-problems
//
//  Created by Luciano Almeida on 14/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef rotate_h
#define rotate_h

#include <iostream>
#include <vector>
class Rotate {
public:
    static void rotate(std::vector<int>& nums, int k) {
      if (k <= 0)
        return;
      
      if (nums.size() < 1)
        return;

      int r = k%nums.size();
      nums.insert(nums.begin(), nums.begin() + (nums.size() - r), nums.end());
      nums.erase(nums.end() - r, nums.end());
    }
};
#endif /* rotate_h */
