#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;
/* Caesar cipher */
int rotate;
char plain_text[300];
char cipher_text[300];
int i;
int c;
      
void cesar_cipher () {
    for (int i = 0; plain_text[i]; ++i) { // This is the cipher function, convert text to lower and ads the rotation
        c = plain_text[i];
        c = tolower(c);
        cipher_text[i] = ((c - 97 + rotate)% 25 + 97); /* 'a' in ASCII is 97 */
        }
    }         
 void cesar_decipher () { // It does the oposite operation than the cipher
    for (int i = 0; cipher_text[i]; ++i) {       
        c = cipher_text[i];
        c = tolower(c);
        plain_text[i] = ((c - 97 - rotate)% 25 + 97); /* 'a' in ASCII is 97 */ 
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
            cin >> plain_text;    
            cout << "Enter rot number: ";        
            cin >> rotate;    
            cesar_cipher();    
            cout << cipher_text;            
            cout << endl;            
            choice = 0;        
            }            
            
        if (choice == 2) {
            cout << "Enter cipher text: ";
            cin >> cipher_text;    
            cout << "Enter rot number: ";        
            cin >> rotate;    
            cesar_decipher();    
            cout << plain_text;            
            cout << endl;            
            choice = 0;        
            }            
        
        if (choice == 3) {            
            exit;
            }
        }
    }
