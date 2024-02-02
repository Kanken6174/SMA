#include "predator.hpp"
#include <iostream>
Predator::Predator(Position p) : Agent(p) {}

void Predator::move(const Position& p) {
    //Predator logic: chase p
    Position nextp(_p);
    float score = 9999;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            Position ptest = _p + Position{i, j, _p.xmax, _p.ymax}; //position to be tested (one of 9 around the current position)
            if(ptest.outOfBounds()){
                continue;
            }
            if(ptest.distance(p) < score){
                score = ptest.distance(p);
                nextp = ptest;
            }
        }
    }
    _p = nextp;
}