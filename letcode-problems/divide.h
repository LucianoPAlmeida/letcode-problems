//
//  divide.h
//  letcode-problems
//
//  Created by Luciano Almeida on 20/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef divide_h
#define divide_h

class Divide {
public:
    int divide(int dividend, int divisor) {
        double value = (double)dividend/divisor;
        if (value < (double)std::numeric_limits<int>::min())
            return std::numeric_limits<int>::min();
        if (value > (double)std::numeric_limits<int>::max())
            return std::numeric_limits<int>::max();
        return (int)value;
    }
};

#endif /* divide_h */
