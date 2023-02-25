# pragma once
#include "uiInteract.h"

class Interface
{
public:
   Interface();
   void input(UserInput input);
   void processing();
   void output();

//private:
//   Logic logic;
};

class InterfaceElement
{
public: 
   virtual void draw(/*StorageElement element*/);
};

class InterfacePellet : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceMissile : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceBomb : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceShrapnel : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceFragment : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceExhaust : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceStreek : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceStandard : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceSinker: InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceFloater : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};

class InterfaceCrazy : InterfaceElement
{
public:
   virtual void draw(/*StorageElement element*/);
};