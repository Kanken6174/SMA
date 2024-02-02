#include "agent.hpp"

class Prey : public Agent {
public:
    Prey(Position p);

    void move(const Position& p) override;
};