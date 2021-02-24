#include <stdio.h>
#include <iostream>
#include <map>
#include <string.h>
using namespace std;

//Frequency analyzer 
int main()
{
    cout << "Enter the ciphertext\n";
    string cipher_text;
    getline(cin, cipher_text);

    map <char, int> alphabet {{'a',0},{'b',0},{'c',0},{'d',0},{'e',0},{'f',0}
    ,{'g',0},{'h',0},{'i',0}, {'j',0},{'k',0}, {'l',0},{'m',0},{'n',0},{'o',0}
    ,{'p',0},{'q',0},{'r',0},{'s',0},{'t',0},{'u',0},{'v',0},{'w',0},{'x',0}
    ,{'y',0},{'z',0}};

    char let; //Save a letter

    for (int i = 0; i < cipher_text.length(); i++)
    {
        let = tolower(cipher_text[i]);
        if (alphabet.find(let) != alphabet.end()) //it looks in the cipher text the letter "let" and ads 1
        {
           alphabet.at(let) = alphabet.at(let) + 1;

        }
    }

    cout << "Letter\tCount\tPercentage\n"; //Just to print the results
    for (int a = 0; a < 26; a++) //goes through alphabet and prints out number of each letter
    {
        int iter = 65 + a;
        cout << char(iter) << "\t" << alphabet.at(tolower(char(iter))) << "\t" 
            << (alphabet.at(tolower(char(iter))) / (double)cipher_text.length())*100.0 << "%" << "\n"; //prints line of character, count, and percentage
    }
}
