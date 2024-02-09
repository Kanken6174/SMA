//#pragma once
#include <vector>
#include <memory>
class Agent;
class Position;

class Solver {
    public:
        virtual Position solve(const Agent& agentToSolve, std::vector<std::shared_ptr<Agent>> agents);
    protected:
        virtual Position solve(const Agent& agentToSolve, std::vector<Position> positions);
        virtual Position solve(const Position& positionToSolve, std::vector<Position> positions) = 0;
};