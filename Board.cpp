/***********************************************************
**  Board.cpp
**  Author: Ted Sanjeevi
**  Date: 2/26/16
**  Description: Board Class implementation file
**
***********************************************************/

#include "Board.hpp"
#include <iostream>



//Default Board constructor - assigns all spaces on the board to '.'
Board::Board()
{
    
    for(int x = 0; x < 3; x++)
    {
        for(int i = 0; i < 3; i++)
        {
           location[x][i] = '.';
        }
    }
}


//makeMove() takes 2 in arguments to be used as coordinates for the board
//and also takes a char to represent the current players turn.
//makeMove() places the char at coordinates if the space is empty and returns true.
//If the space is already taken then it returns false
bool Board::makeMove(int x, int y, char player)
{
    bool move;
    if(location[y][x] == '.')
    {
        location[y][x] = player;
        move = true;
    }
    else
    {
        move = false;
    }
    return move;
}

//gameState() checks to see if X has won, Y has won, Draw, or Unfinished
//A player is determined to be a winner if their assigned char is 3 in a row, 3 in a column, 3 in the diagonal or 3 in the off diagonal.
//The game is a draw if no one has won and there are no more '.' chars on the board
//If no one has won yet and the game is not a draw then the game must be unfinished

GameState Board::gameState()
{
    GameState state;
    if(location[0][0] =='x' && location[0][1] == 'x' && location[0][2] == 'x')
        state = X_WON;
    
    else if(location[1][0] =='x' && location[1][1] == 'x' && location[1][2] == 'x')
        state = X_WON;
    
    else if(location[2][0] =='x' && location[2][1] == 'x' && location[2][2] == 'x')
        state = X_WON;

    else if(location[0][0] =='x' && location[1][0] == 'x' && location[2][0] == 'x')
        state = X_WON;
    
    else if(location[0][1] =='x' && location[1][1] == 'x' && location[2][1] == 'x')
        state = X_WON;
    
    else if(location[0][2] =='x' && location[1][2] == 'x' && location[2][2] == 'x')
        state = X_WON;
    
    else if(location[0][0] =='x' && location[1][1] == 'x' && location[2][2] == 'x')
        state = X_WON;
   
    else if(location[2][0] =='x' && location[1][1] == 'x' && location[0][2] == 'x')
        state = X_WON;
    
    else if(location[0][0] =='o' && location[0][1] == 'o' && location[0][2] == 'o')
        state = O_WON;
    
    else if(location[1][0] =='o' && location[1][1] == 'o' && location[1][2] == 'o')
        state = O_WON;
    
    else if(location[2][0] =='o' && location[2][1] == 'o' && location[2][2] == 'o')
        state = O_WON;
    
    else if(location[0][0] =='o' && location[1][0] == 'o' && location[2][0] == 'o')
        state = O_WON;
    
    else if(location[0][1] =='o' && location[1][1] == 'o' && location[2][1] == 'o')
        state = O_WON;
    
    else if(location[0][2] =='o' && location[1][2] == 'o' && location[2][2] == 'o')
        state = O_WON;
    
    else if(location[0][0] =='o' && location[1][1] == 'o' && location[2][2] == 'o')
        state = O_WON;
    
    else if(location[2][0] =='o' && location[1][1] == 'o' && location[0][2] == 'o')
        state = O_WON;
    
    else if(location[0][0] != '.' && location[0][1] != '.' && location[0][2] != '.' && location[1][0] != '.' && location[1][1] != '.' && location[1][2] != '.' && location[2][0] != '.' && location[2][1] != '.' && location[2][2] != '.')
        state = DRAW;
    
    else
        state = UNFINISHED;
    
    return state;
}

//print() prints out the current values on the board
void Board::print()
{
    std::cout << std::endl << "   0" << "  1" << "  2" << std::endl;
    for(int x = 0; x < 3; x++)
    {
        std::cout << x << "  ";
        for(int i = 0; i < 3; i++)
        {
            std::cout << location[x][i] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}