#ifndef PALINDROME_H
#define PALINDROME_H

#include <Game.h>


class Palindrome : public Game
{
    public:
        Palindrome();
        void startGame() override;
        ~Palindrome();
};

#endif // PALINDROME_H
