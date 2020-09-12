//
//  circularlylinkedlist.cpp
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include <stdio.h>
#include "circularlylinkedlist.h"

CircularlyLinkedList::CircularlyLinkedList() {}

CircularlyLinkedList::CircularlyLinkedList(Node* node) {
    this->headNode = node;
    this->tailNode = node;
}

CircularlyLinkedList::~CircularlyLinkedList() {}

int CircularlyLinkedList::size() {
    int count = 0;
    Node* node = this->headNode;
    while (node != this->tailNode) {
        count++;
        node = node->next;
    }
    return count + 1;
}

Node* CircularlyLinkedList::get(int index) {
    if (index >= this->size()) {
        throw "Index out of bounds";
    }
    
    if (index == this->size() - 1) {
        return this->tailNode;
    }
    
    int count = 0;
    Node* node = this->headNode;
    while (count < index) {
        node = node->next;
        count++;
    }
    return node;
}


int CircularlyLinkedList::sizeRecursive(Node* node) {
    if (node == this->tailNode) {
        return 1;
    }
    
    return 1 + sizeRecursive(node->next);
}

void CircularlyLinkedList::erase() {
    Node* node = this->headNode;
    Node* next;
    while (node != this->tailNode) {
        next = node->next;
        free(node);
        node = next;
    }
    free(this->tailNode);
    this->headNode = NULL;
    this->tailNode = NULL;
}

void CircularlyLinkedList::push(int value) {
    Node* node = new Node();
    node->value = value;
    node->next = this->headNode;
    this->headNode = node;
    this->tailNode->next = node;
}

void CircularlyLinkedList::insert(int index, int value) {
    Node* node = this->get(index);
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = node->next;
    node->next = newNode;
}

void CircularlyLinkedList::append(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    this->tailNode->next = newNode;
    this->tailNode = newNode;
}

void CircularlyLinkedList::deleteIndex(int index) {
    Node* node = this->get(index);
    
    if (index == 0) {
        this->headNode = node->next;
        this->tailNode->next = this->headNode;
        free(node);
    } else if (index == this->size() - 1) {
        this->tailNode = this->get(index - 1);
        free(node);
    } else {
        Node* nodePrev = this->get(index - 1);
        nodePrev->next = node->next;
        free(node);
    }
}

void CircularlyLinkedList::deleteKey(int key) {
    Node* node = this->headNode;
    Node* next;
    int count = 0;
    while (node != this->tailNode) {
        if (node->value == key) {
            this->deleteIndex(count);
            break;
        }
        count++;
        next = node->next;
        node = next;
    }
}

void CircularlyLinkedList::print() {
    Node* node = this->headNode;
    while (node != this->tailNode) {
        cout << node->value;
        node = node->next;
    }
    if (this->tailNode != NULL) {
        cout << this->tailNode->value;
    }
    cout << endl;
}
