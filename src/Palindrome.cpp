#include <iostream>
#include <string>
#include "Palindrome.h"
#include "functions.h"

Palindrome::Palindrome() { }

void Palindrome::startGame() {
    string userWord;

    cout << "Entrez une chaine de caracteres: ";

    getline(cin, userWord);
    removeCharsFromString(userWord, "()- ");

    for (size_t i = 0; i < userWord.length(); i++){
         userWord[i] = tolower(userWord[i]);
    }

    if (userWord == string(userWord.rbegin(), userWord.rend())) {
        cout << "\nVous avez GAGNER!\nLa chaine de caracteres que vous avez entrez est une palindrome.\n\n";
        setPoints(1);
        hasFinished = true;
    } else {
        cout << "\nVous avez PERDU!\nLa chaine de caracteres que vous avez entrez n'est pas une palindrome.\n\n";
    }
}

Palindrome::~Palindrome() { }
