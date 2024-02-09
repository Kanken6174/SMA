#pragma once
#include "../position.hpp"
#include <vector>

class Solver;

class Agent{
protected:
    Position _p;
    bool _alive;
    Solver& _s;
public:
    Agent(Position p, Solver& s);

    Agent& operator = (const Agent& other){
        _p = other._p;
        return *this;
    }

    Position getPosition() const;

    void setPosition(Position p);
    bool getLive();
    void kill();

    // Give the positions of the other agents
    virtual void move(std::vector<Agent>& v);

    void setSolver(Solver& s);
};