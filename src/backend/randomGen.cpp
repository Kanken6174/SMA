#include "randomGen.hpp"

RandomGen::RandomGen(int min, int max) : distrib(min, max) {}

int RandomGen::getRand() {
    return distrib(gen);
}