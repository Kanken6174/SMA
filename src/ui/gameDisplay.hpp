
class Gamespace;
class GameDisplay{
    public:
        virtual ~GameDisplay() = default;
        virtual void displayCurrent(const Gamespace& g) = 0;
};