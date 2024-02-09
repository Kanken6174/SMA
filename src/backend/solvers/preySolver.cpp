#include "preySolver.hpp"
#include "../position.hpp"

Position PreySolver::solve(const Position &positionToSolve, std::vector<Position> positions)
{
    //prey logic: get as far as possible from the position p and as far as possible from the limits, with a bias towards being far from P
    Position nextp = positionToSolve;
    float score = -10000;
    for (auto& p : positions){  //predator positions
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                Position ptest = positionToSolve + Position{i, j, positionToSolve.xmax, positionToSolve.ymax}; 
                //position to be tested (one of 9 around the current position)
                if(ptest.outOfBounds())
                    continue;
                float dist = ptest.distance(p) - ptest.boundDiagDistance()+2;
                if(dist > score){
                    score = dist;
                    nextp = ptest;
                }
            }
        }
    }
    return nextp;
}