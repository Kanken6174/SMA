//#pragma once
#include "../position.hpp"
#include <vector>
#include <memory>

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
    void move(std::vector<std::shared_ptr<Agent>>& v);

    void setSolver(Solver& s);
};