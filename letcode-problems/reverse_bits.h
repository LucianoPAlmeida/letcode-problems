//
//  reverse_bits.h
//  letcode-problems
//
//  Created by Luciano Almeida on 22/11/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef reverse_bits_h
#define reverse_bits_h

class ReverseBits {
public:
    static uint32_t reverseBits(uint32_t n) {
      uint32_t result = 0;
      for (unsigned i = 0; i < 32; i++) {
        uint32_t mask = 1 << i;
        if (n & mask) {
          uint32_t rMask = 1 << (31 - i);
          result |= rMask;
        }
      }
      return result;
    }
};
#endif /* reverse_bits_h */
