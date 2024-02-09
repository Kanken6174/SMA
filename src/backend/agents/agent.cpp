#include "agent.hpp"
#include <iostream>
#include "../solvers/solver.hpp"

Agent::Agent(Position p, Solver& s) : _p(p), _s(s){
    std::cout << "Agent created with position " << p.x << ", " << p.y << std::endl;
}

Position Agent::getPosition() const {
    return _p;
}

void Agent::setPosition(Position p) {
    _p = p;
}

bool Agent::getLive(){
    return _alive;
}

void Agent::kill(){
    _alive = false;
}

void Agent::move(std::vector<std::shared_ptr<Agent>>& v)
{
    _p = _s.solve(*this, v);
}

void Agent::setSolver(Solver &s)
{
    _s = s;
}