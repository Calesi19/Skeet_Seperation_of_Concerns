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
#include "StorageElement.h"

#endif /* storage_hpp */


//class StorageElement
//{
//    virtual ~StorageElement();
//};

//class StorageBird: public StorageElement
//{
//    ~StorageBird() {};
//};
//
//
//class StorageBullet: public StorageElement
//{
//    ~StorageBullet() {};
//    
//};

class StorageTime
{
    
};

class StorageGun
{
private:
   Point pt;
   double angle;
public:
   StorageGun(const Point& pt) : angle(0.78 /* 45 degrees */), pt(pt) {}
   double getAngle() { return angle; }
   Point getPoint() { return pt; }
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
    protected:
        std::vector<StorageElement>& elements;
        int index;
        
    public:
        Iterator(std::vector<StorageElement>& elems) : elements(elems), index(0) {}
        virtual void operator++() = 0;
        virtual StorageElement& operator*() = 0;
        virtual bool operator!=(const Iterator& other) = 0;
    };
    
    
    
    class IteratorBird: public Iterator
    {
    public:
        IteratorBird(std::vector<StorageElement>& elems) : Iterator(elems) {}
        
        void operator++() override {
            while (index < elements.size() && dynamic_cast<StorageBird*>(&elements[index]) == nullptr) {
                index++;
            }
            index++;
        }
        
        StorageElement& operator*() override {
            return elements[index-1];
        }
        
        bool operator!=(const Iterator& other) override {
            return index != dynamic_cast<const IteratorBird*>(&other)->index;
        }
    };
    
    
    
    class IteratorBullet: public Iterator
    {
    public:
        IteratorBullet(std::vector<StorageElement>& elems) : Iterator(elems) {}
        
        void operator++() override {
            while (index < elements.size() && dynamic_cast<StorageBullet*>(&elements[index]) == nullptr) {
                index++;
            }
            index++;
        }
        
        StorageElement& operator*() override {
            return elements[index-1];
        }
        
        bool operator!=(const Iterator& other) override {
            return index != dynamic_cast<const IteratorBullet*>(&other)->index;
        }
    };
    
    
    

public:
    
    Storage() : numBirds(0), points(0), numKilled(0)
    {
        //time = new StorageTime();
        //gun = new StorageGun();
    }
    
    
    int getPoints() { return points; }
    
    int getNumKilled() { return numKilled; }
    
    int getNumMissed();
    
    Iterator begin() {
        return Iterator(elements);
    }
    
    Iterator end() {
        return Iterator(elements);
    }
    
    IteratorBird beginBird() {
        return IteratorBird(elements);
    }
    
    IteratorBird endBird() {
        return IteratorBird(elements);
    }
    
    IteratorBullet beginBullet() {
        return IteratorBullet(elements);
    }
    
    IteratorBullet endBullet() {
        return IteratorBullet(elements);
    }
    
    void addElement(StorageElement element)
    {
        elements.push_back(element);
        if (dynamic_cast<StorageBird*>(&element) != nullptr) {
            numBirds++;
        }
    }
    
    
    void reset() {
        elements.clear();
        numKilled = 0;
        numBirds = 0;
        points = 0;
        //time = new StorageTime();
        //gun = new StorageGun();
    };
    
};
