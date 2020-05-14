//
//  add_two_numbers.h
//  letcode-problems
//
//  Created by Luciano Almeida on 14/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef add_two_numbers_h
#define add_two_numbers_h

#include <iostream>
#include <vector>

//https://leetcode.com/problems/add-two-numbers

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

class AddTwoNnumbers {
private:
  
  static ListNode* add(ListNode* l1, ListNode* l2) {
    ListNode* n1 = l1;
    ListNode* n2 = l2;
    ListNode* result = new ListNode();
    ListNode* current = result;
    bool addOne = false;
    while (n1 && n2) {
      auto value = n1->val + n2->val;
      if (addOne) {
        value++;
      }
      if (value < 10) {
        addOne = false;
        current->val = value;
      } else {
        addOne = true;
        current->val = value - 10;
      }
      n1 = n1->next;
      n2 = n2->next;
      
      if (!n1 && !n2) {
        if (addOne) {
          current->next = new ListNode(1);
        }
        break;
      }
      
      if (!n1) {
        n1 = new ListNode();
      } else if (!n2) {
        n2 = new ListNode();
      }
      
      
      auto n = new ListNode();
      current->next = n;
      current = n;
    }
    
    return result;
  }
  
public:
  static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1->val == 0 && !l1->next) return l2;
    if (l2->val == 0 && !l2->next) return l1;
    
    return add(l1, l2);
  }
  
  static ListNode* addTwoNumbers(std::vector<int> l1, std::vector<int> l2) {
    ListNode* list1 = new ListNode(l1);
    ListNode* list2 = new ListNode(l2);
    
    return addTwoNumbers(list1, list2);
  }
  
};

#endif /* add_two_numbers_h */
