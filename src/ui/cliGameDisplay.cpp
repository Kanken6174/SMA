#include "../backend/gamespace.hpp"
#include "cliGameDisplay.hpp"
#include <iostream>

std::string CliGameDisplay::charForCell(int x, int y, std::vector<std::shared_ptr<Agent>>& pv_prey, std::vector<std::shared_ptr<Agent>>& pv_pred)
{
    unsigned int idx = (x % 2 == 0) + (y % 2 == 0); //tree type

    if(idx == 2)
        idx = (x % 2 != 0) + (y % 2 != 0);
    
    for(std::shared_ptr<Agent>& a : pv_pred){   //predator positions
        Position p = a->getPosition();
        if(p.x == x && p.y == y){
            idx = 3;
            
        }
    }

    for(std::shared_ptr<Agent>& a2 : pv_prey){   //prey positions
        Position p = a2->getPosition();
        if(p.x == x && p.y == y){
            if(idx == 3){
                throw std::runtime_error("prey and predator at the same position: " + std::to_string(x) + "|" + std::to_string(y));
            }
            idx = a2->getLive() ? 2 : 4;
            
        }
    }

    return icons.at(idx);
}

void CliGameDisplay::displayCurrent(const Gamespace &g)
{
    std::vector<std::shared_ptr<Agent>> pv_prey = g.getAgentsPrey();
    std::vector<std::shared_ptr<Agent>> pv_pred = g.getAgentsPred();
    int xmax = pv_prey[0]->getPosition().xmax;
    int ymax = pv_prey[0]->getPosition().ymax;
    //clear
    system("clear");
    //draw
    std::cout << "====================" << "nomnom game" << "====================" << std::endl;
    for (int i = 0; i <= xmax; i++) {
        for (int j = 0; j <= ymax; j++) {
                std::cout << charForCell(i, j, pv_prey, pv_pred);
        }
        std::cout << std::endl;
    }
    std::cout << "====================" << "nomnom game" << "====================" << std::endl;

    //debug
    std::cout << "Prey: ";
    for(auto& p : pv_prey){
        std::cout << p->getPosition().x << "|" << p->getPosition().y << " ";
    }
    std::cout << std::endl;
    std::cout << "Pred: ";
    for(auto& p : pv_pred){
        std::cout << p->getPosition().x << "|" << p->getPosition().y << " ";
    }
    std::cout << std::endl;
}