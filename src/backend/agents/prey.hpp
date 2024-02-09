#pragma once
#include "agent.hpp"

class Prey : public Agent {
public:
    Prey(Position p, Solver& s);
};