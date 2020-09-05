//
//  trieSearchDFS.cpp
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/4/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include "trieSearchDFS.h"

//inserts trieNode into the trie
void trieInsert(trieNode *root, string s) {
    for(int i = 0; i < s.size(); i++){
        if(root->node.count(s[i]) == 0){
            root->node[s[i]] = new trieNode;
        }
        root = root->node[s[i]];
    }
    root->isLeaf = true;
}

//DFS traversal of trie, looks forward for autocompletion
void trieDFS(trieNode *root, string seen, list<string> *found) {
    if(root->node.size() == 0){
        cout << ("Match: " + seen + "\n");
        found->push_back(seen);
        return;
    }
    if(root->isLeaf == true){
        cout << ("Match: " + seen + "\n");
        found->push_back(seen);
    }
    for(map<char, trieNode*>::iterator it = root->node.begin(); it != root->node.end(); ++it) {
        trieDFS(root->node[it->first], seen+it->first, found);
    }
}

//search through trie for strings matching s
void trieSearch(trieNode *root, string s, string seen, list<string> *found) {
    if(s.length() > 0){
        char k = s[0];
        s = s.erase(0,1);
        for(map<char, trieNode*>::iterator it = root->node.begin(); it != root->node.end(); ++it) {
            if(it->first == k){
                seen+=k;
                trieSearch(root->node[k], s, seen, found);
                return;
            }
        }
        cout<<("No matches.\n");
        return;
    }
    else{
        if(root->isLeaf == true){
            cout <<("Match: " + seen + "\n");
            found->push_back(seen);
            return;
        }
        for(map<char, trieNode*>::iterator it = root->node.begin(); it != root->node.end(); ++it) {
            trieDFS(root->node[it->first], seen+it->first, found);
        }
    }
    return;
}
