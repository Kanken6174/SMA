#include "agent.hpp"
#include <iostream>

Agent::Agent(Position p) : _p(p) {
    std::cout << "Agent created with position " << p.x << ", " << p.y << std::endl;
}

Position Agent::getPosition() const {
    return _p;
}

void Agent::setPosition(Position p) {
    _p = p;
}