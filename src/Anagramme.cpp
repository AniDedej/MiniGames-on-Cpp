#include <iostream>
#include <string>
#include <cctype>
#include "Anagramme.h"
#include "functions.h"

Anagramme::Anagramme() { }

void Anagramme::startGame() {
    string firstWord;
    string secondWord;
    string correctWord{};

    cout << "Entrer votre premier mot: ";

    getline(cin, firstWord);

    removeCharsFromString(firstWord, "()- "); // filter all spaces, brackets and minus

    for (size_t i = 0; i < firstWord.length(); i++){
         firstWord[i] = tolower(firstWord[i]); // convert tol lowerstring
    }

    cout << "Entrer votre deuxieme mot: ";

    getline(cin, secondWord);

    removeCharsFromString(secondWord, "()- ");

    for (size_t i = 0; i < secondWord.length(); i++){
         secondWord[i] = tolower(secondWord[i]);
    }

    if (is_anagram(firstWord, secondWord)) {
        cout << "\nVous avez GAGNER!\nLes chaines caracteres que vous avez entres sont anagramme.\n\n";
        setPoints(1);
        hasFinished = true;
    } else {
        cout << "\nVous avez PERDU!\nLes chaine de caractere que vous avez entrés ne sont pas anagramme\n\n";
        hasFinished = true;
    }
}

Anagramme::~Anagramme() {}
