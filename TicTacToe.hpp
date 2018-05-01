/***********************************************************
 **  TicTacToe.hpp
 **  Author: Ted Sanjeevi
 **  Date: 2/26/16
 **  Description: TicTacToe Class Header file
 **
 ***********************************************************/

#ifndef TicTacToe_hpp
#define TicTacToe_hpp

#include "Board.hpp"

class TicTacToe{
private:
    Board game;
    char player;
    
public:
    TicTacToe(char);
    void play();
    
};


#endif /* TicTacToe_hpp */
