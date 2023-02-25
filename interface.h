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
   virtual void draw(/*StorageElement element*/) = 0;
};

class InterfacePellet : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceMissile : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceBomb : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceShrapnel : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceFragment : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceExhaust : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceStreek : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceStandard : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceSinker: InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceFloater : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};

class InterfaceCrazy : InterfaceElement
{
public:
   void draw(/*StorageElement element*/);
};