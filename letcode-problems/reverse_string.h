//
//  reverse_string.h
//  letcode-problems
//
//  Created by Luciano Almeida on 22/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef reverse_string_h
#define reverse_string_h

#include <iostream>
#include <vector>

class ReverseStr {
public:
    static void reverseString(std::vector<char>& s) {
        if (s.size() <= 1)
            return;
        
        for (unsigned i = 0; i < s.size()/2; i++) {
            unsigned tail = s.size() - i - 1;
            auto c = s[tail];
            s[tail] = s[i];
            s[i] = c;
        }
    }
};
#endif /* reverse_string_h */
