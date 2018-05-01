/***********************************************************
 **  Board.hpp
 **  Author: Ted Sanjeevi
 **  Date: 2/26/16
 **  Description: Board Class Header File
 **
 ***********************************************************/

#ifndef Board_hpp
#define Board_hpp

enum GameState {X_WON, O_WON, DRAW, UNFINISHED};

class Board{
private:
    char location[3][3];
    
public:
    Board();
    bool makeMove(int, int, char);
    GameState gameState();
    void print();
};

#endif /* Board_hpp */
