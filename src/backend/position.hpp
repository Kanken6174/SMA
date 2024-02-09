#pragma once
#include<cmath>

class Position{
public:
    int x = 0;
    int y = 0;
    int xmax = 0;
    int ymax = 0;

    Position(int x, int y, int xmax, int ymax){
        this->x = x;
        this->y = y;
        this->xmax = xmax;
        this->ymax = ymax;
    }

    Position(const Position& other){
        x = other.x;
        y = other.y;
        xmax = other.xmax;
        ymax = other.ymax;
    }

    Position& operator = (const Position& other){
        x = other.x;
        y = other.y;
        xmax = other.xmax;
        ymax = other.ymax;
        return *this;
    }

    bool operator == (const Position& other) const{
        return x == other.x && y == other.y;
    }

    bool operator != (const Position& other)  const{
        return x != other.x || y != other.y;
    }

    Position operator += (const Position& other){
        x += other.x;
        y += other.y;
        return *this;
    }

    Position operator -= (const Position& other){
        x -= other.x;
        y -= other.y;
        return *this;
    }

    Position operator + (const Position& other) const{
        return Position{x + other.x, y + other.y, xmax, ymax};
    }
    
    Position operator - (const Position& other) const{
        return Position{x - other.x, y - other.y, xmax, ymax};
    }

    Position operator * (const int& other) const{
        return Position{x * other, y * other, xmax, ymax};
    }

    Position operator / (const int& other) const{
        return Position{x / other, y / other, xmax, ymax};
    }

    float distance(const Position& other) const{
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }

    bool outOfBounds() const{
        return x < 0 || x >= xmax || y < 0 || y >= ymax;
    }

    float boundDiagDistance() const{
        return sqrt(pow(x, 2) + pow(y, 2)) + sqrt(pow(xmax - x, 2) + pow(y, 2)) + sqrt(pow(x, 2) + pow(ymax - y, 2)) + sqrt(pow(xmax - x, 2) + pow(ymax - y, 2));
    }
};