//
//  list_node.h
//  letcode-problems
//
//  Created by Luciano Almeida on 14/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef list_node_h
#define list_node_h

#include <iostream>
#include <vector>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
    
  ListNode(std::vector<int> elements) {
    this->val = elements.front();
    this->next = nullptr;
    ListNode* cur = this;
    int i = 1;
    while(i < elements.size()) {
      ListNode *next = new ListNode();
      next->val = elements[i];
      cur->next = next;
      cur = next;
      i++;
    }
  }

  void dump() {
    auto l = this;
    while (l) {
      std::cout << l->val;
      l = l->next;
    }
    std::cout << std::endl;
  }
};

#endif /* list_node_h */
