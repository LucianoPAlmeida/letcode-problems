//
//  missing_number.h
//  letcode-problems
//
//  Created by Luciano Almeida on 21/11/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef missing_number_h
#define missing_number_h

#include <iostream>
#include <vector>
#include <set>

class MissingNumber {
public:
    static int missingNumber(std::vector<int>& nums) {
        std::set<int> values(nums.begin(), nums.end());
        int missing = (int)nums.size();
        for(unsigned i = 0; i < nums.size(); i++) {
          if (values.find((int)i) == values.end()) {
            missing = (int)i;
            break;
          }
        }
        return missing;
    }
};

#endif /* missing_number_h */
