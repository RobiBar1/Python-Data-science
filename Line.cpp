#include "pch.h"
#include "Line.h"

Line::Line()
{
	first.setX(0); first.setY(0);
	second.setX(0); second.setY(0);
}

Line::Line(myPoint const &a, const myPoint &b)
{
	first = a;
	second = b;
}

void Line::setFirstPoint(myPoint const &a)
{
	this->first = a;
}

void Line::setSecondPoint(myPoint const &a)
{
	second = a;
}

myPoint Line::getFirstPoint()
{
	return first;
}

myPoint Line::getSecondPoint()
{
	return second;
}

const Line& Line::operator=(const Line&a)
{
	this->first = a.first;
	this->second = a.second;
	return a;
}
