#include "land.h"
#include "food.h"

class Field : public Land{
    public:
        Field(int squares = 0);
        void waterField(int& energy);
        void advanceDay();
        void endSeason();
        bool plantCrop(const Food& f, std::string season);
        int harvestField(int& energy);
        ~Field();
    private:
        int numPlants;
        int capacity;
        Food* foodlist;
};
