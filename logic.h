
class Storage;

enum class BirdType {
    Standard,
    Crazy,
    Floater,
    Sinker
};


class Logic {
    private:
        Storage storage;
    public:

        void advance();
        void spawn();
        void input();
        void begin();
        void end();
        int getFramesLeft();
        void getLevelNumber(); 
        void getGunAngle();
        bool isPlaying(); 
        bool isGameOver();
        double  getPercentLeft(); 


};