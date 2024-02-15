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
        std::cout << "prey spawned at: " << p.x << "|" << p.y << "\n";
    }

    //spawn predators at random position
    for (int i = 0; i < amoundPred; i++)
    {
        Position p2(randomGenX.getRand(), randomGenY.getRand(), _xmax, _ymax);
        _pred.push_back(std::make_shared<Predator>(p2, predS));
        std::cout << "predator spawned at: " << p2.x << "|" << p2.y << "\n";
    }
}

bool Gamespace::updatePrey() {
    //check if all prey are dead
    bool allDead = true;
    for (std::shared_ptr<Agent>& p : _prey) {
        if(p->getLive())
            allDead = false;
    }
    if(allDead){
        std::cout << "All prey are dead" << std::endl;
        return true;
    }

    for (std::shared_ptr<Agent>& p : _prey) {
        if(p->getLive())
            p->move(_pred);
    }

    //break up clusters of prey (same cell) 
    for (std::shared_ptr<Agent>& p : _prey) {
        if(p->getLive()){
            for (std::shared_ptr<Agent>& p2 : _prey) {
                if(p->getPosition() == p2->getPosition() && p != p2){
                    p2->move(_pred);
                }
            }
        }
    }
    return false;
}

bool Gamespace::updatePred() {
    for (auto& p : _pred) {
        if(p->getLive()){
            p->move(_prey);
            //check for kills
            for (auto& p2 : _prey) {
                if(p->getPosition() == p2->getPosition()){
                    p2->kill();
                }
            }
        }
    }

    //break up clusters of predators (same cell)
    for (auto& p : _pred) {
        if(p->getLive()){
            for (auto& p2 : _pred) {
                if(p->getPosition() == p2->getPosition() && p != p2){
                    p2->move(_prey);
                }
            }
        }
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