//
//  trieSearchDFS.h
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/4/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include "includes.h"
#include <map>
#include <list>

struct trieNode{
    map<char, trieNode*> node;
    bool isLeaf;
    trieNode() {isLeaf = false;}
};

void trieInsert(trieNode *root, string s);
void trieDFS(trieNode *root, string seen, list<string> *found);
void trieSearch(trieNode *root, string s, string seen, list<string> *found);
