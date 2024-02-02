#pragma once
#include "position.hpp"

class Agent{
protected:
    Position _p;

public:
    Agent(Position p);

    Agent& operator = (const Agent& other){
        _p = other._p;
        return *this;
    }

    Position getPosition() const;

    void setPosition(Position p);

    // Give the position of its goal to the agent
    virtual void move(const Position& p) = 0;
};