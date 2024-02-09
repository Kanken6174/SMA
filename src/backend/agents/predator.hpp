#pragma once
#include "agent.hpp"

class Predator : public Agent {
public:
    Predator(Position p, Solver& s);
};