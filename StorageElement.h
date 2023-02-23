/*************************************************************
* StorageElement
* 
* This class will hold everything there is to know about a
* game object. Base class has functionality all will need, 
* child classes add needed variables
*
* Author: Benjamin Witham
*************************************************************/

#pragma once

//These will probably cause a circular dependency error
#include "point.h"
#include "InterfaceElement.h"
class LogicElement;

//Base Storage Element class
class StorageElement
{
protected:
	Point pt;
	Velocity v;
	double radius;
	int points;
	bool dead;
	LogicElement* pLogic;
	InterfaceElement* pInterface;
public:
	StorageElement();
	Point getPoint() { return pt; }
	Velocity getVelocity() { return v;}
	double getRadius() { return radius; }
	int getPoints() { return points; }
	bool isDead() { return dead; }

};

//Unsure what to place in here
class StorageBird : public StorageElement
{
private:
};

//
class StorageEffect : public StorageElement
{
private:
	int age;
	Point ptEnd;
public:
	StorageEffect();
	int getAge() { return age; }
	Point getEndPoint() { return ptEnd; }
};


class StorageBullet : public StorageElement
{
private:
	int timeToDie;
public:
	StorageBullet();
	int getTimeToDie() { return timeToDie; }
};

