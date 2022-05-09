#pragma once
#include "myPoint.h"
class straitLine : public myPoint
{
public:
	straitLine() { a.setX(0); a.setY(0); distance = 10; }
	void setPoint(myPoint);
	void setDistance(int a) { distance = a; }
	myPoint getPoint() { return a; }
	int getDistance() { return distance; }
	void whoAmI() { cout << "im a strait line" << endl; }
	~straitLine(){}

private:
	myPoint a;
	unsigned int distance;
};

