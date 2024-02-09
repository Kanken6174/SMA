#include <random>

class RandomGen{
    protected:
        std::mt19937 gen = std::mt19937(std::random_device{}());
        std::uniform_int_distribution<> distrib;

    public:
        RandomGen(int min, int max);
        int getRand();
};