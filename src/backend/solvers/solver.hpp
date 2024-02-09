#pragma once
#include <vector>
class Agent;
class Position;

class Solver {
    public:
        virtual Position solve(const Agent& agentToSolve, std::vector<Agent> agents);
    protected:
        virtual Position solve(const Agent& agentToSolve, std::vector<Position> positions);
        virtual Position solve(const Position& positionToSolve, std::vector<Position> positions) = 0;
};