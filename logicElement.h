class StorageElement;

class LogicElement
{
    public:
        virtual void advance(StorageElement * storage) =0;
        virtual void turn(StorageElement* storage)=0;
        bool isOutOfBounds(StorageElement* storage) const 
        {
            return (storage->getPoints().getX() < storage->-getRadius() ||
            storage->getPoints().getX() >= storage->getDimensions().getX() + storage->getRadius() ||
              storage->getPoints().getY() < storage->-getRadius()|| storage->getPoints().getY() >= storage.getDimensions().getY() + storage->getRadius());
        }
        void kill(StorageElement* storage) 
        {
            storage->kill();
            storage->setPoints(storage->getPoints() * -1);
        }

        void bulletMove(StorageElement* storage)
        {
            storage->setPoints(storage->getPoints() + storage->getVelocity());
            if(isOutOfBounds(storage))
            {
                storage->bulletKill();
            }
            
        }


};

class LogicSinker : public LogicElement {
    public:
        void advance(StorageElement* storage) override {

            storage->setVelocity(storage->getVelocity() * -0.990);

            // inertia
            storage->setPoints(storage->getPoints() + storage->getVelocity());



            // out of bounds checker
            if (isOutOfBounds(storage))
            {
                kill(storage);
            }
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicFloater : public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            // Drag 
            storage->setVelocity(storage->getVelocity() * 0.990);

            // inertia
            storage->setPoints(storage->getPoints() + storage->getVelocity());

                // anti-gravity
            storage->setVelocity(storage->getVelocity() + storage->Velocity(0, 0.05));

            if (isOutOfBounds(storage))
            {
                kill(storage);
            }
        }

        void turn(StorageElement* storage) override {
            // Turn the floater based on the contents of the storage element
        }
};

class LogicStandard: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            // Move the sinker forward one step based on the contents of the storage element
                        // Drag 
            storage->setVelocity(storage->getVelocity() * 0.995);

                        // inertia
            storage->setPoints(storage->getPoints() + storage->getVelocity());

            if (isOutOfBounds(storage))
            {
                kill(storage);
            }
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicCrazy: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            // Move the sinker forward one step based on the contents of the storage element
                        // Drag 
            if(randomInt(0,15) == 0)
            {
                storage->getVelocity().addDy(randomFloat(-1.5, 1.5));
                storage->getVelocity().addDx(randomFloat(-1.5, 1.5));
            }

                        // inertia
            storage->setPoints(storage->getPoints() + storage->getVelocity());

            if (isOutOfBounds(storage))
            {
                kill(storage);
            }
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicFragment: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            storage -> getPoint() += storage -> getVelocity();

            storage-> getAge() -= 0.02;
            storage->getRadius() *=0.95
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicStreek: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
                  storage-> getAge() -= 0.10;
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicExhaust: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
                  storage-> getAge() -= 0.025;
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};



class LogicBomb: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            storage->getTimeToDie() -= 0.1;
            if(storage->isTimeToDie())
            {
                storage->bulletKill();
            }

            bulletMove(storage);

        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicShrapnel: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            storage->getTimeToDie() -= 0.1;
            if(storage->isTimeToDie())
            {
                storage->bulletKill();
            }

            storage->getEffects().push_back(new Streek(storage->getPoints(), storage->getVelocity()));

            bulletMove(storage);
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};

class LogicMissile: public LogicElement {
    public:
        void advance(StorageElement* storage) override {
            storage->getEffects().push_back(new Exhaust(storage->getPoints(), storage->getVelocity()));

            bulletMove(storage);
        }

        void turn(StorageElement* storage) override {
            // Turn the sinker based on the contents of the storage element
        }
};




