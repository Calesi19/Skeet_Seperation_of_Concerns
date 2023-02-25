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