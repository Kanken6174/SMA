#include "gamespace.hpp"
#include "randomGen.hpp"
#include <iostream>
#include "randomGen.hpp"
#include "solvers/predatorSolver.hpp"
#include "solvers/preySolver.hpp"
#include "agents/predator.hpp"
#include "agents/prey.hpp"

Gamespace::Gamespace(int xmax, int ymax, int amountPrey, int amoundPred) : _xmax(xmax), _ymax(ymax)
{
    std::cout << "Limits picked:" << _xmax << "|" << ymax << std::endl;
    RandomGen randomGenX(0, _xmax);
    RandomGen randomGenY(0, _ymax);

    //spawn prey at random positions
    for (int i = 0; i < amountPrey; i++)
    {
        Position p = Position(randomGenX.getRand(), randomGenY.getRand(), _xmax, _ymax);
        _prey.push_back(Prey(p, preyS));
    }

    //spawn predators at random position
    for (int i = 0; i < amoundPred; i++)
    {
        Position p = Position(randomGenX.getRand(), randomGenY.getRand(), _xmax, _ymax);
        _pred.push_back(Predator(p, predS));
    }
}

bool Gamespace::updatePrey() {
    for (auto& p : _prey) {
        if(p.getLive())
            p.move(_pred);
    }
    return false;
}

const std::vector<Agent> Gamespace::getAgentsPred() const
{
    return _pred;
}

const std::vector<Agent> Gamespace::getAgentsPrey() const
{
    return _prey;
}

bool Gamespace::updatePred() {
    for (auto& p : _prey) {
        if(p.getLive())
            p.move(_pred);
    }
    return false;
}