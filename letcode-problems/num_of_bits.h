//
//  um_of_bits.h
//  letcode-problems
//
//  Created by Luciano Almeida on 21/11/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef num_of_bits_h
#define num_of_bits_h

class OneBits {
public:
  static int hammingWeight(uint32_t n) {
    int count = 0;
    for (unsigned i = 0; i < 32; i++) {
      uint32_t mask = 1 << i;
      if (n & mask)
        count++;
    }
    return count;
  }
};

#endif /* um_of_bits_h */
