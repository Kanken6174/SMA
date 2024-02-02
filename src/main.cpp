#include <iostream>
#include "cliGameDisplay.hpp"
#include "gamespace.hpp"
#include <thread>
#include "randomGen.hpp"
int main(){
    CliGameDisplay display;
    Gamespace gamespace = Gamespace(12, 24);
    RandomGen gen(0,1);
    std::cout << gamespace.getPositionPred().x << std::endl;
    do{
        bool nover = gamespace.updatePrey();
        //random bonus turn for prey
        if(gen.getRand() % 2 == 0) nover = gamespace.updatePrey();
        display.displayCurrent(gamespace);
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        
        if(!nover) break;
            
        nover = gamespace.updatePred();
        display.displayCurrent(gamespace);
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        if(!nover) break;
    }while(true);
    std::cout << "Game over! Pikachu was dismembered violently" << std::endl;
    return 0;
}