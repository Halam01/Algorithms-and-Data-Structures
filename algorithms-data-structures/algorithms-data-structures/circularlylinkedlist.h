//
//  circularlylinkedlist.h
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#ifndef circularlylinkedlist_h
#define circularlylinkedlist_h

#include "includes.h"
#include "linkedlist.h"

class CircularlyLinkedList: public LinkedList {
    private:
    public:
        Node* tailNode;
    
        CircularlyLinkedList();
        CircularlyLinkedList(Node* node);
        ~CircularlyLinkedList();
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


#endif /* circularlylinkedlist_h */
