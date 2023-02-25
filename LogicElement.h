#pragma once
#include "StorageElement.h"

class LogicElement
{
public:
	bool isOutOfBounds(StorageElement* element);
	virtual void advance(StorageElement* element) = 0;
	virtual void turn(StorageElement* element) = 0;
	virtual void death(StorageElement* element) = 0;
};

class LogicPellet : public LogicElement
{
	void advance(StorageElement * element);
	void turn(StorageElement * element);
	void death(StorageElement * element);
};

class LogicMissile : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicBomb : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicShrapnel : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicFragment : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicExhaust : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicStreek : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};
class LogicStandard : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};
class LogicSinker : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicFloater : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};

class LogicCrazy : public LogicElement
{
	void advance(StorageElement* element);
	void turn(StorageElement* element);
	void death(StorageElement* element);
};