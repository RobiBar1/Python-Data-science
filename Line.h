#pragma once
#include "myPoint.h"
class Line : public myPoint
{
public:
    Line();
    Line(const myPoint&, const myPoint&);
    void setFirstPoint(myPoint const &);
    void setSecondPoint(myPoint const &);
    virtual void whoAmI() { cout << "im a line" << endl; }
    myPoint getFirstPoint();
    myPoint getSecondPoint();
    const Line& operator =(const Line&);
    ~Line(){}
private:
    myPoint first;
    myPoint second;
};

