#include "./agents/prey.hpp"
#include "position.hpp"
#include "./agents/predator.hpp"
#include <vector>
#include "./solvers/solver.hpp"
#include "solvers/predatorSolver.hpp"
#include "solvers/preySolver.hpp"
class Gamespace {
    protected:
        std::vector<Agent> _pred;
        std::vector<Agent> _prey;
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
        const std::vector<Agent> getAgentsPred() const;
        const std::vector<Agent> getAgentsPrey() const;
};