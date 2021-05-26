#ifndef ASSIGN2_HIGH_SCORE_LOADER_H
#define ASSIGN2_HIGH_SCORE_LOADER_H
#include <fstream>
#include <string>
#include <map>

class HighScoreLoader
{
public:
    HighScoreLoader();
    std::map<std::string, int> getHighScores();

private:
    std::map<std::string, int> highScores;
    std::ifstream highScoreFile;
};

#endif // ASSIGN2_HIGH_SCORE_LOADER_H
