#ifndef ANAGRAMME_H
#define ANAGRAMME_H

#include "Game.h"

class Anagramme: public Game {
    public:
        Anagramme();
        void startGame() override;
        ~Anagramme();
};

#endif // ANAGRAMME_H
