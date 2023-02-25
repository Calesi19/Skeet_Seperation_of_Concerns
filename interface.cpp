#include "interface.h"
#include <cassert>
#include "bird.cpp"
#include "bullet.h"
#include "effect.h"



Interface::Interface()
{

}

void Interface::input(UserInput input)
{

}

void Interface::processing()
{

}

void Interface::output()
{

}

void InterfacePellet::draw(/*StorageElement* element*/)
{
   //if(element->dead)
   //   drawDot(element->pt, 3.0, 1.0, 1.0, 0.0)
}

void InterfaceMissile::draw(/*StorageElement element*/)
{
   //if (element->dead)
   //{
   //   // missile is a line with a dot at the end so it looks like fins.
   //   Point ptNext(element->pt);
   //   ptNext.add(element->v);
   //   drawLine(pt, ptNext, 1.0, 1.0, 0.0);
   //   drawDot(pt, 3.0, 1.0, 1.0, 1.0);
   //}
}

void InterfaceBomb::draw(/*StorageElement element*/)
{
   //if (element->dead)
   //{
   //   // Bomb actually has a gradient to cut out the harsh edges
   //   drawDot(element->pt, element->radius + 2.0, 0.50, 0.50, 0.00);
   //   drawDot(element->pt, element->radius + 1.0, 0.75, 0.75, 0.00);
   //   drawDot(element->pt, element->radius + 0.0, 0.87, 0.87, 0.00);
   //   drawDot(element->pt, element->radius - 1.0, 1.00, 1.00, 0.00);
   //}
}

void InterfaceShrapnel::draw(/*StorageElement element*/)
{
   //if (element->dead)
   //   drawDot(element->pt, element->radius, 1.0, 1.0, 0.0);
}

void InterfaceFragment::draw(/*StorageElement element*/)
{
   //// the velocity is a random kick plus the velocity of the thing that died
   //element->v.setDx(element->v.getDx() * 0.5 + random(-6.0, 6.0));
   //element->v.setDy(element->v.getDy() * 0.5 + random(-6.0, 6.0));

   //// age
   //element->age = random(0.4, 1.0);

   //// size
   //element->radius = random(1.0, 2.5);
}

void InterfaceExhaust::draw(/*StorageElement element*/)
{
   //Point pt = element->pt;
   //Velocity v = element->v *= -1.0;
   //pt += v;

   //// age
   // element->age = 0.5;
}

void InterfaceStreek::draw(/*StorageElement element*/)
{
   //Point pt = element->pt;
   //Velocity v = element->v *= -1.0;
   //pt += v;

   //// age
   // element->age = 0.5;
}

void InterfaceStandard::draw(/*StorageElement element*/)
{
   //if(element->dead)
   //{
   //   drawDisk(element->pt, element->radius, 1.0, 1.0, 1.0);
   //   drawDisk(element->pt, element->radius - 3.0, 0.0, 0.0, 1.0);
   //}
}

void InterfaceSinker::draw(/*StorageElement element*/)
{
   //if(element->dead)
   //{
   //   drawDisk(element->pt, element->radius, 0.0, 0.0, 0.8);
   //   drawDisk(element->pt, element->radius - 4.0, 0.0, 0.0, 0.0);
   //}
}

void InterfaceFloater::draw(/*StorageElement element*/)
{
   //if(element->dead)
   //{
   //   drawDisk(element->pt, element->radius, 0.0, 0.0, 1.0);
   //   drawDisk(element->pt, element->radius - 4.0, 1.0, 1.0, 1.0);
   //}
}

void InterfaceCrazy::draw(/*StorageElement element*/)
{
   //if(element->dead)
   //{
   //   drawDisk(element->pt, element->radius * 1.0, 0.0, 0.0, 1.0);
   //   drawDisk(element->pt, element->radius * 0.8, 0.2, 0.2, 1.0);
   //   drawDisk(element->pt, element->radius * 0.6, 0.4, 0.4, 1.0);
   //   drawDisk(element->pt, element->radius * 0.4, 0.6, 0.6, 1.0);
   //   drawDisk(element->pt, element->radius * 0.2, 0.8, 0.8, 1.0);
   //}
}
