#include "./agents/prey.hpp"
#include "position.hpp"
#include <vector>
#include "solvers/preySolver.hpp"
#include <memory>
class Gamespace {
    protected:
        std::vector<std::shared_ptr<Agent>> _pred;
        std::vector<std::shared_ptr<Agent>> _prey;
        PredatorSolver predS;
        PreySolver preyS;
        int _xmax = 25;
        int _ymax = 25;
    public:
        Gamespace(int xmax, int ymax, int amountPrey, int amoundPred);
        bool updatePred();
        bool updatePrey();
        const std::vector<Position> getPositionPred() const;
        const std::vector<Position> getPositionPrey() const;
        const std::vector<std::shared_ptr<Agent>> getAgentsPred() const;
        const std::vector<std::shared_ptr<Agent>> getAgentsPrey() const;
};