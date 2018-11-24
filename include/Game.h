#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

using namespace std;

class Game {
private:
    string name;
    string description;
    int points;

public:
    int choice;
    Game();
    void setName(string n);
    void setDesc(string desc);
    void setPoints(int point);
    string getName();
    string getDescr();
    int getPoints();
    void displayInfo(int game, int games);
    virtual void startGame();
    bool hasFinished;
    ~Game();
};

#endif // GAME_H
