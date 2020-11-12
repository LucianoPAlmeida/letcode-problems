//
//  zeroes.h
//  letcode-problems
//
//  Created by Luciano Almeida on 12/11/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef zeroes_h
#define zeroes_h

#include <iostream>
#include <vector>

class Zeroes {
public:
    static void moveZeroes(std::vector<int>& nums) {
      unsigned i = 0;
      unsigned cur = 0;
      while (i < nums.size()) {
        if (nums[cur] == 0) {
          nums.erase(nums.begin() + cur);
          nums.push_back(0);
        } else {
          cur++;
        }
        i++;
      }
    }
};
#endif /* zeroes_h */
