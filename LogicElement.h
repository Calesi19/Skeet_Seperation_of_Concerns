#pragma once
#include "StorageElement.h"

class LogicElement
{
public:
	virtual void advance() = 0;
	virtual void turn() = 0;
	virtual void death() = 0;
};

class LogicPellet : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicMissile : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicBomb : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicShrapnel : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicFragment : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicExhaust : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicStreek : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};
class LogicStandard : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};
class LogicSinker : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicFloater : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};

class LogicCrazy : public LogicElement
{
	void advance(StorageElement element);
	void turn(StorageElement element);
	void death(StorageElement element);
};