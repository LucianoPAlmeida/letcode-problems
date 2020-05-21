//
//  valid_parens.h
//  letcode-problems
//
//  Created by Luciano Almeida on 21/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef valid_parens_h
#define valid_parens_h

#include <iostream>
#include <vector>

class Parens {
public:
  static bool isValid(std::string s) {
    std::vector<char> queue;
    
    for (auto c : s) {
      if (c == '{' || c == '(' || c == '[') {
        queue.push_back(c);
      }
      
      if (queue.empty()) return false;
      
      if (c == '}' || c == ')' || c == ']') {
        if (c == '}' && queue.back() != '{')
          return false;
        else if (c == ']' && queue.back() != '[')
          return false;
        else if (c == ')' && queue.back() != '(')
          return false;
        else {
          queue.pop_back();
        }
        
      }
    }
    
    return queue.empty();
    
  }
};

#endif /* valid_parens_h */
