#include "pch.h"
#include "rectangle.h"

void rectangle::setRectangleAround(myPoint a)
{
	int leftRightdis = 60,upDownDis=leftRightdis/2;
	myPoint rightup, downleft, downright;
	rightup.setX(a.getX() + upDownDis);
	rightup.setY(a.getY());
	downleft.setX(a.getX());
	downleft.setY(a.getY() + leftRightdis);
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
