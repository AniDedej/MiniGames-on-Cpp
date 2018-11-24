#include "Menu.h"
#include <iostream>
#include <cstdlib>
#include <string>

Menu::Menu() { }

void Menu::loadMenu() {
    cout << "========================= Bienvenue dans l'application =========================\n" << endl;
    cout << "===================================== MENU =====================================" << endl;
    cout << "1. Commoncer a jouer\n2. Quiter l'application\n\n";

    while (choice != 1 && choice != 2) {
        cout << "Entrer le numero: ";
        string choiceStr{""};
        getline(cin, choiceStr); // get string input

        cout << "================================================================================\n";

        choice = stoi(choiceStr); // convert string to int
        switch(choice) {
        case 1:
            cout << "Le jeu a commoncer\n\n";
            break;
        case 2:
            cout << "Merci d'avoir jouer\n";
            exit(0);
            break;
        default:
            cout << "Le numero est invalid!\n";
        }
    }
}

Menu::~Menu() { }
