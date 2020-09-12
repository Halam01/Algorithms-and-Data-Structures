//
//  doublylinkedlist.cpp
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList() {}

DoublyLinkedList::DoublyLinkedList(Node* node) {
    this->headNode = node;
}

DoublyLinkedList::~DoublyLinkedList() {}

void DoublyLinkedList::push(int value) {
    Node* node = new Node();
    node->value = value;
    node->next = this->headNode;
    this->headNode->prev = node;
    this->headNode = node;
}

void DoublyLinkedList::insert(int index, int value) {
    Node* node = this->get(index);
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = node->next;
    newNode->prev = node;
    node->next = newNode;
}

void DoublyLinkedList::append(int value) {
    Node* node = this->get(this->size() - 1);
    Node* newNode = new Node();
    newNode->value = value;
    newNode->prev = node;
    node->next = newNode;
}

void DoublyLinkedList::deleteIndex(int index) {
    Node* node = this->get(index);
    
    if (index == 0) {
        this->headNode = node->next;
        free(node);
    } else if (index == this->size() - 1) {
        free(node);
    } else {
        node->prev->next = node->next;
        free(node);
    }
}
