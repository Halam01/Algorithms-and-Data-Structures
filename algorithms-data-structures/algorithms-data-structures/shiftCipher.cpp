//
//  shiftCipher.cpp
//  algorithms-data-structures
//
//  Created by Hanna Alam on 9/4/20.
//  Copyright © 2020 Hanna Alam. All rights reserved.
//

#include "includes.h"

string encryptShiftCypher(int key, string text) {
    string newText = "";
    for(int i = 0; i < text.length(); i++) {
        newText += (text[i] + key);
    }
    cout << "Encrypted text: " << newText;
    return newText;
}

string decryptShiftCypher(int key, string text) {
    string newText = "";
    for(int i = 0; i < text.length(); i++) {
        newText += (text[i] - key);
    }
    cout << " Decrypted text: " << newText;
    return newText;
}
