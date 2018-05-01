/***********************************************************
 **  main.cpp
 **  Author: Ted Sanjeevi
 **  Date: 2/26/16
 **  Description: Main for TicTacToe game
 **
 ***********************************************************

#include <iostream>
#include "TicTacToe.hpp"

int main() {
    
    char firstPlayer;
    
    //Ask user to assign 'X' or 'O' to player 1
    std::cout << "Please enter X or O for the first player: ";
    std::cin >> firstPlayer;
    
    //Create new TicTacToe object and assign first player
    TicTacToe game(static_cast<char>(tolower(firstPlayer)));
    
    //starts the game
    game.play();

    return 0;
}
**/