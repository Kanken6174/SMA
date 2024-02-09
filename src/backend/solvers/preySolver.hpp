//#pragma once
#include "predatorSolver.hpp"

class PreySolver : public Solver {
public:
    Position solve(const Position& positionToSolve, std::vector<Position> positions) override;
};