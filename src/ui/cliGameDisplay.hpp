#include "gameDisplay.hpp"
#include <vector>
class Gamespace;
class Agent;
class CliGameDisplay : public GameDisplay {
    protected:
        std::vector<int> icons = {U'🌳',U'🌲',U'🐇',U'🐺',U'💥'};
        char32_t charForCell(int x, int y, std::vector<Agent>& pv_prey, std::vector<Agent>& pv_pred);

    public:
        virtual void displayCurrent(const Gamespace& g) override;

        virtual ~CliGameDisplay() = default;
};