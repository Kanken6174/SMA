#pragma once
#include "solver.hpp"

class PredatorSolver : public Solver {
public:
    Position solve(const Position& positionToSolve, std::vector<Position> positions) override;
};