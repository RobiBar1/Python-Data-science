#pragma once
#include "Line.h"
class Square :public Line
{
public:
	Square() { up, down, left, right; }
	void setSquareAround(myPoint);
	Square getSquare() { return *this; }
	Line getUpLine(){ return up; }
	Line getDownLine() { return down; }
	Line getLeftLine() { return left; }
	Line getRightLine() { return  right; }
	virtual void whoAmI() { cout << "i am a Square" << endl; }
	myPoint getPointUpLeft();
	myPoint getPointUpRight();
	myPoint getPointDownLeft();
	myPoint getPointDownright();
	~Square(){}
private:
	Line up, down, left, right;
};

