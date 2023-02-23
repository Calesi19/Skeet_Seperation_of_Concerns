//
//  storage.hpp
//  Lab03
//
//  Created by Carlos Lespin on 2/22/23.
//

#ifndef storage_hpp
#define storage_hpp

#include <stdio.h>
#include <vector>

#endif /* storage_hpp */



class StorageElement
{
    
};


class StorageTime
{
    
};

class StorageGun
{
    
};


class Storage
{

private:
    
    
    std::vector <StorageElement> elements;
    int numBirds;
    int points;
    int numKilled;
    StorageTime time;
    StorageGun gun;
    
    
    
    class Iterator
    {
        
    };
    
    class Storage::IteratorBird
    {
        
    };
    
    class Storage::IteratorBullet
    {
        
    };
    
    
    

public:
    
    Storage() : numBirds(0), points(0), numKilled(0)
    {
        //time = new StorageTime();
        //gun = new StorageGun();
    }
    
    
    int getPoints() {return points;}
    
    int getNumKilled() {return numKilled;}
    
    int getNumMissed();
    
    Iterator begin();
    
    Iterator end();
    
    IteratorBird beginBird();
    
    IteratorBird endBird();
    
    IteratorBullet beginBullet();
    
    IteratorBullet endBullet();
    
    void addElement(StorageElement element);
    
    void reset();
    
    
    
    
    
};
