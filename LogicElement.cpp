#include "LogicElement.h"


bool LogicElement::isOutOfBounds(StorageElement* element)
{
   return (element->getPoint().getX() < -element->getRadius() ||
           element->getPoint().getX() >= dimensions.getX() + element->getRadius() ||
           element->getPoint().getY() < -element->getRadius() ||
           element->getPoint().getY() >= dimensions.getY() + element->getRadius());
}

void LogicPellet::advance(StorageElement* element)
{
   bulletMove(element);
}

void LogicMissile::advance(StorageElement* element)
{
   bulletMove(element);
}

void LogicBomb::advance(StorageElement* element)
{
   bulletMove(element);
}

void LogicShrapnel::advance(StorageElement* element)
{
   bulletMove(element);
}

void bulletMove(StorageElement* element)
{
	element->getPoint().add(element->getVelocity());

	//if (isOutOfBounds())
	//{
	//	//kill bullet
	//}
}

void LogicFragment::advance(StorageElement* element)
{
   // move it forward with inertia (no gravity)
   element->getPoint() += element->getVelocity();

   // increase the age so it fades away
   element->getAge() -= 0.02;
   element->getRadius() *= 0.95;
}

void LogicExhaust::advance(StorageElement* element)
{
   element->getAge() -= 0.025;
}

void LogicStreek::advance(StorageElement* element)
{
   element->getAge() -= 0.10;
}

void LogicStandard::advance(StorageElement* element)
{
   // small amount of drag
   element->getVelocity() *= 0.995;

   // inertia
   element->getPoint().add(element->getVelocity());

   // out of bounds checker
   //if (isOutOfBounds())
   //{
   //   kill();
   //   //element.getPoints() *= -1; // points go negative when it is missed!
   //}
}

void LogicSinker::advance(StorageElement* element)
{
   // gravity
   element->getVelocity().addDy(-0.07);

   // inertia
   element->getPoint().add(element->getVelocity());

   // out of bounds checker
   //if (isOutOfBounds())
   //{
   //   kill();
   //   points *= -1; // points go negative when it is missed!
   //}
}

void LogicFloater::advance(StorageElement* element)
{
   // large amount of drag
   element->getVelocity() *= 0.990;

   // inertia
   element->getPoint().add(element->getVelocity());

   // anti-gravity
   element->getVelocity().addDy(0.05);

   // out of bounds checker
   //if (isOutOfBounds())
   //{
   //   kill();
   //   points *= -1; // points go negative when it is missed!
   //}
}

void LogicCrazy::advance(StorageElement* element)
{
   // erratic turns eery half a second or so
   if (randomInt(0, 15) == 0)
   {
      element->getVelocity().addDy(randomFloat(-1.5, 1.5));
      element->getVelocity().addDx(randomFloat(-1.5, 1.5));
   }

   // inertia
   element->getPoint().add(element->getVelocity());

   // out of bounds checker
   //if (isOutOfBounds())
   //{
   //   kill();
   //   points *= -1; // points go negative when it is missed!
   //}
}

void LogicPellet::turn(StorageElement* element)
{
   return;
}

//Missiles must turn
void LogicMissile::turn(StorageElement* element)
{
   
}

void LogicBomb::turn(StorageElement* element)
{
   return;
}

void LogicShrapnel::turn(StorageElement* element)
{
   return;
}

void LogicFragment::turn(StorageElement* element)
{
   return;
}

void LogicExhaust::turn(StorageElement* element)
{
   return;
}

void LogicStreek::turn(StorageElement* element)
{
   return;
}

void LogicStandard::turn(StorageElement* element)
{
   return;
}

void LogicSinker::turn(StorageElement* element)
{
   return;
}

void LogicFloater::turn(StorageElement* element)
{
   return;
}

void LogicCrazy::turn(StorageElement* element)
{
   return;
}


void LogicPellet::death(StorageElement* element)
{
   return;
}

void LogicMissile::death(StorageElement* element)
{
   return;
}

//Bombs must die
void LogicBomb::death(StorageElement* element)
{

}

void LogicShrapnel::death(StorageElement* element)
{
   return;
}

void LogicFragment::death(StorageElement* element)
{
   return;
}

void LogicExhaust::death(StorageElement* element)
{
   return;
}

void LogicStreek::death(StorageElement* element)
{
   return;
}

void LogicStandard::death(StorageElement* element)
{
   return;
}

void LogicSinker::death(StorageElement* element)
{
   return;
}

void LogicFloater::death(StorageElement* element)
{
   return;
}

void LogicCrazy::death(StorageElement* element)
{
   return;
}

int randomInt(int min, int max)
{
   //assert(min < max);
   int num = (rand() % (max - min)) + min;
   //assert(min <= num && num <= max);
   return num;
}
double randomFloat(double min, double max)
{
   //assert(min <= max);
   double num = min + ((double)rand() / (double)RAND_MAX * (max - min));
   //assert(min <= num && num <= max);
   return num;
}