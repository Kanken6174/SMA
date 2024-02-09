#include "gamespace.hpp"
#include "randomGen.hpp"
#include <iostream>
#include "randomGen.hpp"

Gamespace::Gamespace(int xmax, int ymax, int amountPrey, int amoundPred) : _xmax(xmax), _ymax(ymax)
{
    std::cout << "Limits picked:" << _xmax << "|" << ymax << std::endl;
    RandomGen randomGenX(0, _xmax);
    RandomGen randomGenY(0, _ymax);

    //spawn prey at random positions
    for (int i = 0; i < amountPrey; i++)
    {
        Position p(randomGenX.getRand(), randomGenY.getRand(), _xmax, _ymax);
        _prey.push_back(std::make_shared<Prey>(p, preyS));
    }

    //spawn predators at random position
    for (int i = 0; i < amoundPred; i++)
    {
        Position p(randomGenX.getRand(), randomGenY.getRand(), _xmax, _ymax);
        _pred.push_back(std::make_shared<Predator>(p, predS));
    }
}

bool Gamespace::updatePrey() {
    for (std::shared_ptr<Agent>& p : _prey) {
        if(p->getLive())
            p->move(_pred);
    }
    return false;
}

bool Gamespace::updatePred() {
    for (auto& p : _prey) {
        if(p->getLive())
            p->move(_pred);
    }
    return false;
}

const std::vector<std::shared_ptr<Agent>> Gamespace::getAgentsPred() const
{
    return _pred;
}

const std::vector<std::shared_ptr<Agent>> Gamespace::getAgentsPrey() const
{
    return _prey;
}