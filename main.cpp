#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "Game.h"
#include "Anagramme.h"
#include "Palindrome.h"
#include "Menu.h"

using namespace std;

int main() {
    Menu menu{};
    vector<Game> games{};
    Anagramme anagramme{};
    anagramme.setName("Le jeu de l'anagramme !");
    anagramme.setDesc("Mot obtenu par la permutation des lettres d'un autre mot.");
    Palindrome palindrome{};
    palindrome.setName("Le jeu de palindrome !");
    palindrome.setDesc("Mot ou groupe de mots qui peut être lu indifféremment de gauche à droite et de droite à gauche.");
    size_t gameIndex{0};

    games.push_back(anagramme);
    games.push_back(palindrome);

    // Shuffle the games vector
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    auto rng = default_random_engine {seed};
    shuffle(games.begin(), games.end(), rng);

    int gamesCount{0};
    gamesCount = games.size();

    menu.loadMenu();

    for (Game game: games) {
        ++gameIndex;
        game.displayInfo(gameIndex, gamesCount); // display info of the game
        if (game.getName() == anagramme.getName()) { // check by name which game to play
            anagramme.startGame(); // start the game
        } else if (game.getName() == palindrome.getName()) {
            palindrome.startGame();
        } else {
            break;
        }

        if (anagramme.hasFinished && palindrome.hasFinished) {
            int allPoints{0};
            cout << "\n=================================== RESULT =====================================" << endl;
            cout << "Vous avez fini tous les jeux. BRAVO!\n";
            allPoints = anagramme.getPoints() + palindrome.getPoints();
            cout << "Vos points: " << allPoints << " points\n";

        }
    }
    return 0;
}
