//
//  plus_one.h
//  letcode-problems
//
//  Created by Luciano Almeida on 31/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef plus_one_h
#define plus_one_h

#include <iostream>
#include <vector>

class PlusOne {
public:
    static std::vector<int> plusOne(std::vector<int>& digits) {
        bool add = false;
        
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + 1;
            
            add = sum >= 10;
            digits[i] = (add) ? sum - 10 : sum;
            
            if (!add)
                break;
        }
        
        if (add) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

#endif /* plus_one_h */
