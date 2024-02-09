#include "solver.hpp"
#include "../position.hpp"
#include "../agents/prey.hpp"

Position Solver::solve(const Agent& agentToSolve, std::vector<std::shared_ptr<Agent>> agents) {
    std::vector<Position> v;
    for (auto& agent : agents) {
        if(agent->getLive()) //ignore dead agents
            v.push_back(agent->getPosition());
    }
    return solve(agentToSolve, v);
}

Position Solver::solve(const Agent& agentToSolve, std::vector<Position> agents) {
    return solve(agentToSolve.getPosition(), agents);
}