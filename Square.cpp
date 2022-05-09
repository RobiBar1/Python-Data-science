#include "pch.h"
#include "Square.h"

void Square::setSquareAround(myPoint a)
{
	int squaraDistance = 50;
	myPoint rightup, downleft, downright;
	rightup.setX(a.getX() + squaraDistance);
	rightup.setY(a.getY());
	downleft.setX(a.getX());
	downleft.setY(a.getY() + squaraDistance);
	downright.setX(rightup.getX());
	downright.setY(downleft.getY());
	up.setFirstPoint(a);
	up.setSecondPoint(rightup);
	left.setFirstPoint(a);
	left.setSecondPoint(downleft);
	down.setFirstPoint(downleft);
	down.setSecondPoint(downright);
	right.setFirstPoint(rightup);
	right.setSecondPoint(downright);
		
}

myPoint Square::getPointUpLeft()
{
	return up.getFirstPoint();
}

myPoint Square::getPointUpRight()
{
	return up.getSecondPoint();
}

myPoint Square::getPointDownLeft()
{
	return left.getSecondPoint();
}

myPoint Square::getPointDownright()
{
	return down.getSecondPoint();
}
