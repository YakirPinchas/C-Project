/*
 * Game.h
 *
 *  Created on: Nov 05, 2017
 *      Author: avi simson & yakir pinchas
 *      Avi id: 205789100
 *      Yakir: 203200530
 */
#include <iostream>
#include "Game.h"
using namespace std;
//constructor- gets game1 as a type of game and initialize it to game.
Game :: Game(GameType* game1) {
    game = game1;
}
//destructor.
Game :: ~Game() {
    delete game;
}
//runs the required game.
void Game :: Run() {
    game->playGame();
}