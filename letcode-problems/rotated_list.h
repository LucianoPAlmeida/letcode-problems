//
//  rotated_list.h
//  letcode-problems
//
//  Created by Luciano Almeida on 31/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef rotated_list_h
#define rotated_list_h

#include <iostream>
#include <vector>

#include "list_node.h"

class RotateListNode {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0)
            return head;
        
        auto node = head;
        
        std::vector<ListNode*> indexed;
        while (node) {
            indexed.push_back(node);
            node = node->next;
        }
        
        if (indexed.size() <= 1) return head;
        
        k = k%indexed.size();
        
        if (k == 0)
            return head;
        
        auto root = indexed[indexed.size() - k];
        auto last = indexed.back();
        auto newLast = indexed[indexed.size() - k - 1];
        newLast->next = nullptr;
        last->next = head;
        
        return root;
    }
};

#endif /* rotated_list_h */
