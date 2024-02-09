#include "agent.hpp"

class Predator : public Agent {
public:
    Predator(Position p);

    void move(const Position& p) override;
};