#pragma once
#include "Line.h"
class rectangle :public Line
    
{
public:
    rectangle(){ up, down, left, right; }
    void setRectangleAround(myPoint);
    rectangle getRectangle() { return *this; }
    Line getUpLine() { return up; }
    Line getDownLine() { return down; }
    Line getLeftLine() { return left; }
    Line getRightLine() { return  right; }
    virtual void whoAmI() { cout << "i am a rectangle" << endl; }
    myPoint getPointUpLeft() { return up.getFirstPoint(); }
    myPoint getPointUpRight() { return up.getSecondPoint(); }
    myPoint getPointDownLeft() { return left.getSecondPoint(); }
    myPoint getPointDownright() { return down.getSecondPoint(); }
    ~rectangle(){}
private:
    Line up, down, left, right;
};

