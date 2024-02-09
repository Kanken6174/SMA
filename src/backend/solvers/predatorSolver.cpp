#include "predatorSolver.hpp"
#include "../position.hpp"

Position PredatorSolver::solve(const Position &positionToSolve, std::vector<Position> positions)
{
    //Predator logic: chase p
    Position nextp(positionToSolve);
    float score = 9999;
    for (auto& p : positions){  //prey positions
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                Position ptest = positionToSolve + Position{i, j, 
                    positionToSolve.xmax, positionToSolve.ymax}; //position to be tested (one of 9 around the current position)
                if(ptest.outOfBounds()){
                    continue;
                }
                if(ptest.distance(p) < score){
                    score = ptest.distance(p);
                    nextp = ptest;
                }
            }
        }   
    }
    return nextp;
}