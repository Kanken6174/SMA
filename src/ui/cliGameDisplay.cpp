#include "../backend/gamespace.hpp"
#include "cliGameDisplay.hpp"
#include <iostream>

void CliGameDisplay::displayCurrent(const Gamespace& g) {
    const Position& p_prey = g.getPositionPrey();
    const Position& p_pred = g.getPositionPred();
    //clear
    system("clear");
    //draw
    std::cout << "====================" << "nomnom game" << "====================" << std::endl;
    for (int i = 0; i < p_pred.xmax; i++) {
        for (int j = 0; j < p_pred.ymax; j++) {
            if (i == p_prey.x && j == p_prey.y && i == p_pred.x && j == p_pred.y) {
                std::cout << "💥";
            } 
            else if (i == p_prey.x && j == p_prey.y) {
                std::cout << "🐇";
            } else if (i == p_pred.x && j == p_pred.y) {
                std::cout << "🐺";
            } else {
                if(i % 2 == 0){
                    if(j % 2 == 0)
                        std::cout <<  "🌳";
                    else
                        std::cout <<  "🌲";
                }else{
                    if(j % 2 == 0)
                        std::cout <<  "🌲";
                    else
                        std::cout <<  "🌳";
                }
                
            }
        }
        std::cout << std::endl;
    }
    std::cout << "====================" << "nomnom game" << "====================" << std::endl;
    std::cout << "prey at: " << p_prey.x << ", " << p_prey.y << std::endl;
    std::cout << "predator at: " << p_pred.x << ", " << p_pred.y << std::endl;
}