#pragma once
#include<iostream>
using namespace std;
class myPoint
{
public:
	myPoint() { x = 0; y = 0; }
	myPoint(int _x, int _y);
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
	virtual void whoAmI() { cout << "i am a point wiht x = " << x << "and y = " << y << endl; }
	const myPoint& operator =(const myPoint&);
	~myPoint(){}
private:
	int x ;
	int y ;
};