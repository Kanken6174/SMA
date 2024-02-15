#include <iostream>
#include "./ui/cliGameDisplay.hpp"
#include "./backend/gamespace.hpp"
#include <thread>
#include "./backend/randomGen.hpp"
int main(){
    CliGameDisplay display;
    Gamespace gamespace = Gamespace(24, 48, 6, 3);
    RandomGen gen(0,1);
    do{
        bool nover = gamespace.updatePrey();
        //random bonus turn for prey
        if(gen.getRand() % 2 == 0) nover = gamespace.updatePrey();
        display.displayCurrent(gamespace);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        
        if(nover) break;
            
        gamespace.updatePred();
        display.displayCurrent(gamespace);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        if(nover) break;
    }while(true);
    std::cout << "Game over! Pikachu was dismembered violently" << std::endl;
    return 0;
}