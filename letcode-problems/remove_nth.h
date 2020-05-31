//
//  remove_nth.h
//  letcode-problems
//
//  Created by Luciano Almeida on 31/05/20.
//  Copyright © 2020 Luciano Almeida. All rights reserved.
//

#ifndef remove_nth_h
#define remove_nth_h

#include "list_node.h"

class RemoveNth {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto node = head;
        vector<ListNode*> indexed;
        while (node) {
            indexed.push_back(node);
            node = node->next;
        }
        
        auto nth = indexed[indexed.size() - n];
        if (nth == head)
            return head->next;
        auto previous = indexed[indexed.size() - n - 1];
        previous->next = nth->next;
        return head;
    }
};

#endif /* remove_nth_h */
