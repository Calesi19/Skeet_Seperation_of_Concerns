#include "logic.h"

using namespace std; 




   void Logic::spawn()
{
   // select bird size based on current level
   double size;
   switch (this->storage.getLevel())
   {
      // in level 1 spawn big birds occasionally
      case 1:
         size = 30.0;
         // spawns when there is nothing on the screen
         if (this->storage.getBirds().size() == 0 && random(0, 15) == 1)
            storage.getStorageBirds().push_back(new Standard(size, 7.0));
         
         // spawn every 4 seconds
         if (this->random(0, 4 * 30) == 1)
            storage.getStorageBirds().push_back(new Standard(size, 7.0));
         break;
         
      // two kinds of birds in level 2
      case 2:
         size = 25.0;
         // spawns when there is nothing on the screen
         if (this->storage.getBirds().size() == 0 && random(0, 15) == 1)
            storage.getStorageBirds().push_back(new Standard(size, 7.0, 12));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Standard(size, 5.0, 12));
         // spawn every 3 seconds
         if (random(0, 3 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Sinker(size));
         break;
      
      // three kinds of birds in level 3
      case 3:
         size = 20.0;
         // spawns when there is nothing on the screen
         if (storage.getBirds().size() == 0 && random(0, 15) == 1)
            this->storage.getStorageBirds().push_back(new Standard(size, 5.0, 15));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Standard(size, 5.0, 15));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds()push_back(new Sinker(size, 4.0, 22));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds()push_back(new Floater(size));
         break;
         
      // three kinds of birds in level 4
      case 4:
         size = 15.0;
         // spawns when there is nothing on the screen
         if (storage.getBirds().size() == 0 && random(0, 15) == 1)
            this->storage.getStorageBirds().push_back(new Standard(size, 4.0, 18));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Standard(size, 4.0, 18));
         // spawn every 4 seconds
        if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Sinker(size, 3.5, 25));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Floater(size, 4.0, 25));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            this->storage.getStorageBirds().push_back(new Crazy(size));
            break;
        
   }

   {
      // in level 1 spawn big birds occasionally
      case 1:
         size = 30.0;
         // spawns when there is nothing on the screen
         if (birds.size() == 0 && random(0, 15) == 1)
            birds.push_back(new Standard(size, 7.0));
         
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Standard(size, 7.0));
         break;
         
      // two kinds of birds in level 2
      case 2:
         size = 25.0;
         // spawns when there is nothing on the screen
         if (birds.size() == 0 && random(0, 15) == 1)
            birds.push_back(new Standard(size, 7.0, 12));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Standard(size, 5.0, 12));
         // spawn every 3 seconds
         if (random(0, 3 * 30) == 1)
            birds.push_back(new Sinker(size));
         break;
      
      // three kinds of birds in level 3
      case 3:
         size = 20.0;
         // spawns when there is nothing on the screen
         if (birds.size() == 0 && random(0, 15) == 1)
            birds.push_back(new Standard(size, 5.0, 15));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Standard(size, 5.0, 15));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Sinker(size, 4.0, 22));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Floater(size));
         break;
         
      // three kinds of birds in level 4
      case 4:
         size = 15.0;
         // spawns when there is nothing on the screen
         if (birds.size() == 0 && random(0, 15) == 1)
            birds.push_back(new Standard(size, 4.0, 18));

         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Standard(size, 4.0, 18));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Sinker(size, 3.5, 25));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Floater(size, 4.0, 25));
         // spawn every 4 seconds
         if (random(0, 4 * 30) == 1)
            birds.push_back(new Crazy(size));
         break;
         
      default:
         break;
   }
};