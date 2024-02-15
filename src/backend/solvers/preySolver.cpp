#include "preySolver.hpp"
#include "../position.hpp"
#include <iostream>

Position PreySolver::solve(const Position &positionToSolve, std::vector<Position> positions)
{
    if(positionToSolve.outOfBounds()){
        std::cout << "PreySolver: out of bounds" << std::endl;
        std::cout << positionToSolve.x << " " << positionToSolve.y << " " << positionToSolve.xmax << " " << positionToSolve.ymax << std::endl;
        exit(0);
    }

    //prey logic: get as far as possible from the position p and as far as possible from the limits, with a bias towards being far from P
    Position nextp = positionToSolve;
    int votes[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    float score = -10000;
    for (auto& p : positions){  //predator positions
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                Position ptest = positionToSolve + Position{i, j, positionToSolve.xmax, positionToSolve.ymax}; 
                //position to be tested (one of 9 around the current position)
                if(ptest.outOfBounds())
                    continue;
                float dist = ptest.distance(p) - ptest.boundDiagDistance()+5;
                if(dist > score){
                    score = dist;
                    nextp = ptest;
                }
            }
        }
        votes[nextp.x - positionToSolve.x + 1][nextp.y - positionToSolve.y + 1]++;
    }

    //extract the most voted position
    int max = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(votes[i][j] > max){
                max = votes[i][j];
                nextp = Position(i-1, j-1, positionToSolve.xmax, positionToSolve.ymax) + positionToSolve;
            }
        }
    }
    return nextp;
}