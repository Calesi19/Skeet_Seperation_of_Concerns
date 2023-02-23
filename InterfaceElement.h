#pragma once
#include "storage.hpp"

class InterfaceElement
{
	virtual void draw(StorageElement element) = 0;
};

class InterfacePellet : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceMissile : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceBomb : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceShrapnel : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceFragment : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceExhaust : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceStreek : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceStandard : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceSinker : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceFloater : public InterfaceElement
{
	void draw(StorageElement element);
};

class InterfaceCrazy : public InterfaceElement
{
	void draw(StorageElement element);
};