#include "gameDisplay.hpp"
#include <vector>
#include <string>
#include <memory>
class Gamespace;
class Agent;
class CliGameDisplay : public GameDisplay {
    protected:
        std::vector<std::string> icons = {"🌳","🌲","🐇","🐺","💀"};
        std::string charForCell(int x, int y, std::vector<std::shared_ptr<Agent>>& pv_prey, std::vector<std::shared_ptr<Agent>>& pv_pred);

    public:
        virtual void displayCurrent(const Gamespace& g) override;

        virtual ~CliGameDisplay() = default;
};