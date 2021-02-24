#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;

/* Vigenere cipher */

char input_text[300], plain_text[300], cipher_text[300], key[100], mod_key[300];
int i, c, q, v;

void key_vigenere () { //It makes a new key, with the same size than the plain text
    for (int q = 0, v = 0; q < strlen(input_text); ++q, ++v) {
        if (v == strlen(key)){
            v = 0;
            }
        mod_key[q] = key[v]; 
    }
}

void vigenere_cipher () {
    for (int i = 0; input_text[i]; ++i) { // This is the cipher function, convert text to lower and ads the rotation
        c = input_text[i];
        c = tolower(c);
        cipher_text[i] = ((c - 97 + mod_key[i] - 97)% 25 + 97); /* 'a' in ASCII is 97 */   
        }
    }
 void vigenere_decipher () { // It does the oposite operation than the cipher
    for (int i = 0; input_text[i]; ++i) {
        c = input_text[i];
        c = tolower(c);
        plain_text[i] = ((c - 97 - (mod_key[i] - 97))% 25 + 97); /* 'a' in ASCII is 97 */
        }
    }     
int main() {
    int choice;
    while (choice != 1 && choice != 2 && choice != 3) {
            cout << "Press 1 for Encrypt, 2 for Decrypt or 3 to quit: ";
            cin>> choice;
            if (choice != 1 && choice != 2 && choice != 3) {
                cout << "Incorrect Choice";
                cout << endl;
            }    
        if (choice == 1) {
            cout << "Enter plain text: ";
            cin >> input_text;    
            cout << "Enter key: ";
            cin >> key;
            key_vigenere();
            vigenere_cipher();
            cout << cipher_text;
            cout << endl;
            choice = 0;
            }        
        if (choice == 2) {
            cout << "Enter cipher text: ";
            cin >> input_text;
            cout << "Enter key: ";
            cin >> key;
            key_vigenere();
            vigenere_decipher();    
            cout << plain_text;            
            cout << endl;            
            choice = 0;        
            }           
        if (choice == 3) {            
            exit;
            }
        }
    }
