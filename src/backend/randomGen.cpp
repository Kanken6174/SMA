#include "randomGen.hpp"

RandomGen::RandomGen(int min, int max) : distrib(min, max) {gen.seed(time(NULL));}

int RandomGen::getRand() {
    return distrib(gen);
}