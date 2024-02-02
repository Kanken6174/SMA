#include "prey.hpp"
#include <iostream>
Prey::Prey(Position p) : Agent(p) {}

void Prey::move(const Position& p) {
    //prey logic: get as far as possible from the position p and as far as possible from the limits, with a bias towards being far from P
    Position nextp = _p;
    float score = -10000;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            Position ptest = _p + Position{i, j, _p.xmax, _p.ymax}; //position to be tested (one of 9 around the current position)
            if(ptest.outOfBounds())
                continue;
            float dist = ptest.distance(p) - ptest.boundDiagDistance()+2;
            if(dist > score){
                score = dist;
                nextp = ptest;
            }
        }
    }
    _p = nextp;
}