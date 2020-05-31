//
//  reverse-list.h
//  letcode-problems
//
//  Created by Luciano Almeida on 31/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef reverse_list_h
#define reverse_list_h

#include "list_node.h"

class ReverseList {
public:
  ListNode* reverseList(ListNode* head) {
    if (!head || !head->next)
      return head;
    
    auto node = reverseList(head->next);
    auto n = node;
    while(n->next) {
      n = n->next;
    }
    head->next = nullptr;
    n->next = head;
    return node;
  }
};
#endif /* reverse_list_h */
