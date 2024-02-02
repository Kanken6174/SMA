#include "prey.hpp"
#include "position.hpp"
#include "predator.hpp"

class Gamespace {
    protected:
        Predator _pred;
        Prey _prey;
        int _xmax = 25;
        int _ymax = 25;
    public:
        Gamespace(int xmax, int ymax);
        bool updatePred();
        bool updatePrey();
        const Position getPositionPred() const {return _pred.getPosition();}
        const Position getPositionPrey() const {return _prey.getPosition();}
};