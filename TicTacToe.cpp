/***********************************************************
 **  TicTacToe.cpp
 **  Author: Ted Sanjeevi
 **  Date: 2/26/16
 **  Description: TicTacToe Class implemenation file
 **
 ***********************************************************/

#include "TicTacToe.hpp"
#include <iostream>

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

//Constructor for TicTacToe accepts a char to assign to player
TicTacToe::TicTacToe(char p)
{
    player = p;
}

//play() starts the game.  While the game is unfinished, each player will
//be asked to enter their moves until a player has won or the game has reached
//a draw
//If a square is already taken then the player will be asked to make a new move
void TicTacToe::play()
{
    int x, y;
    game.print();
    while(game.gameState() == UNFINISHED)
    {
        
        std::cout << "Player " << static_cast<char>(toupper(player)) << ": please enter your move: " << std::endl;
        
        std:: cin >> x >> y;
        if(game.makeMove( y , x , player))
        {
            game.print();
            
            if(player == 'x')
                player = 'o';
            else
                player = 'x';
            
        }
        else
            std::cout << std::endl << "That square is already taken." << std::endl;
        
    }
    GameState winner = game.gameState();
    if(winner == X_WON)
        std::cout << "Player X is the winner!" << std::endl;
    else if(winner == O_WON)
        std::cout << "Player O is the winner!" << std::endl;
    else
        std::cout << "This game ended in a draw!" << std::endl;
}