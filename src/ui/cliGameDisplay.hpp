#include "gameDisplay.hpp"

class Gamespace;
class CliGameDisplay : public GameDisplay {
    public:
        virtual void displayCurrent(const Gamespace& g) override;

        virtual ~CliGameDisplay() = default;
};