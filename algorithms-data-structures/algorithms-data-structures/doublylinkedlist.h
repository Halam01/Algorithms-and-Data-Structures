//
//  doublylinkedlist.h
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#ifndef doublylinkedlist_h
#define doublylinkedlist_h

#include "linkedlist.h"
#include "includes.h"

class DoublyLinkedList: public LinkedList {
private:
public:
    DoublyLinkedList();
    DoublyLinkedList(Node* node);
    ~DoublyLinkedList();
    void push(int value);
    void insert(int index, int value);
    void append(int value);
    void deleteIndex(int index);
};


#endif /* doublylinkedlist_h */
