#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Game.h"

using namespace std;

Game::Game(): name{""}, description{""}, points{0}, choice{0}, hasFinished{false} { }

void Game::setName(string c) {
    name = c;
}

void Game::setDesc(string desc) {
    description = desc;
}

void Game::setPoints(int point) {
    Game::points += point;
}

string Game::getName() {
    return name;
}

string Game::getDescr() {
    return description;
}

int Game::getPoints() {
    return points;
}

void Game::displayInfo(int game, int games) {
    cout << "=============== " << getName() << " ==================== Jeux: " << game << "/" << games << " =========\n" << endl;
    cout << "--------------------------------- Description ----------------------------------";
    cout << getDescr() << endl;
    cout << "--------------------------------------------------------------------------------";
}

void Game::startGame() {};

Game::~Game() {};
