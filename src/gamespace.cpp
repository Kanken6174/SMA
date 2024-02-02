#include "gamespace.hpp"
#include "randomGen.hpp"
#include <iostream>

Gamespace::Gamespace(int xmax, int ymax) : _xmax(xmax), _ymax(ymax), 
_pred(Position(1, 1, xmax, ymax)), _prey(Position(xmax-1, ymax-1, xmax, ymax)) 
{
    std::cout << "Limits picked:" << _xmax << "|" << ymax << std::endl;
}

bool Gamespace::updatePrey() {
    _prey.move(_pred.getPosition());
    return _pred.getPosition() != _prey.getPosition();
}

bool Gamespace::updatePred() {
    _pred.move(_prey.getPosition());
    return _pred.getPosition() != _prey.getPosition();
}