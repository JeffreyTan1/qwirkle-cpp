#ifndef ASSIGN2_GAME_SAVER_H
#define ASSIGN2_GAME_SAVER_H
#include <fstream>
#include <iostream>

class Player;
class Board;
class LinkedList;

class GameSaver
{
public:
    GameSaver(Player *player1, Player *player2, Board *board, LinkedList *bag, Player *currentPlayer, std::string outputFileName, int playerCount, bool isEnhanced);
    GameSaver(Player *player1, Player *player2, Player *player3, Board *board, LinkedList *bag, Player *currentPlayer, std::string outputFileName, int playerCount);
    GameSaver(Player *player1, Player *player2, Player *player3, Player *player4, Board *board, LinkedList *bag, Player *currentPlayer, std::string outputFileName, int playerCount);

private:
    void outputPlayer(Player *player);
    void outputBoard(Board *board);

    std::ofstream outFile;
};

#endif // ASSIGN2_GAME_SAVER_H
