//
//  linkedlist.cpp
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/11/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include "linkedlist.h"
#include "includes.h"


LinkedList::LinkedList() {
    
}
LinkedList::LinkedList(Node* headNode) {
    this->headNode = headNode;
}

LinkedList::~LinkedList() {}

int LinkedList::size() {
    int count = 0;
    Node* node = this->headNode;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int LinkedList::sizeRecursive(Node* node) {
    if (node == NULL) {
        return 0;
    }
    
    return 1 + sizeRecursive(node->next);
}

void LinkedList::erase() {
    Node* node = this->headNode;
    Node* next;
    while (node != NULL) {
        next = node->next;
        free(node);
        node = next;
    }
    this->headNode = NULL;
}

Node* LinkedList::get(int index) {
    if (index >= this->size()) {
        throw "Index out of bounds";
    }
    
    int count = 0;
    Node* node = this->headNode;
    while (count < index) {
        node = node->next;
        count++;
    }
    return node;
}

void LinkedList::push(int value) {
    Node* node = new Node();
    node->value = value;
    node->next = this->headNode;
    this->headNode = node;
}

void LinkedList::insert(int index, int value) {
    Node* node = this->get(index);
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = node->next;
    node->next = newNode;
}

void LinkedList::append(int value) {
    Node* node = this->get(this->size() - 1);
    Node* newNode = new Node();
    newNode->value = value;
    node->next = newNode;
}

void LinkedList::deleteIndex(int index) {
    Node* node = this->get(index);
    
    if (index == 0) {
        this->headNode = node->next;
        free(node);
    } else if (index == this->size() - 1) {
        free(node);
    } else {
        Node* nodePrev = this->get(index - 1);
        nodePrev->next = node->next;
        free(node);
    }
}

void LinkedList::deleteKey(int key) {
    Node* node = this->headNode;
    Node* next;
    int count = 0;
    while (node != NULL) {
        if (node->value == key) {
            this->deleteIndex(count);
            break;
        }
        count++;
        next = node->next;
        node = next;
    }
}

void LinkedList::print() {
    Node* node = this->headNode;
    while (node != NULL) {
        cout << node->value;
        node = node->next;
    }
    cout << endl;
}
