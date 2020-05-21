//
//  revert_int.h
//  letcode-problems
//
//  Created by Luciano Almeida on 21/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef revert_int_h
#define revert_int_h

#include <iostream>
#include <vector>
#include <math.h>

class Int {
public:
    static int reverse(int x) {
      std::vector<int> nums;
      int n = abs(x);
      while ( n != 0) {
        nums.push_back(n % 10);
        n = n/10;
      }
      
      if (nums.size() > 10)
        return 0;
      
      double result = 0;
      for (int i = (int)nums.size(); i > 0; i--) {
        result += nums[nums.size() - i] * pow(10, i - 1);
      }
      result = x > 0 ? result : result * -1;
      if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min())
        return 0;
      
      return (int)result;
    }
};

#endif /* revert_int_h */
