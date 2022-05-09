#include "pch.h"
#include "myPoint.h"

myPoint::myPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}

const myPoint& myPoint::operator=(const myPoint&r)
{
	this->x = r.x;
	this->y = r.y;
	return r;
}
