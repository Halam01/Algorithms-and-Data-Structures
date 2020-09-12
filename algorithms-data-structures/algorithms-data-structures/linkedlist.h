//
//  linkedlist.h
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h

#include <stdio.h>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
    private:
        Node* headNode;
    
    public:
        LinkedList();
        LinkedList(Node* headNode);
        ~LinkedList();
        int size();
        int sizeRecursive(Node* node);
        void erase();
        Node* get(int index);
        void push(int value);
        void insert(int index, int value);
        void append(int value);
        void deleteIndex(int index);
        void deleteKey(int key);
        void print();
};


#endif /* linkedlist_h */
