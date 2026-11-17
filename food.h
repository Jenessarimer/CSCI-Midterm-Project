#include "plant.h"

class Food : public Plant{
    public:
        Food();
        void setHarvestYield(int amt);
        void setDaysToHarvest(int d);
        void setReadyToHarvest(bool r);
        void setHarvestsLeft(int c);
        void setMultiSeason(bool m);
        int getHarvestYield() const;
        int getDaysToHarvest() const;
        bool getReadyToHarvest() const;
        int getHarvestsLeft() const;
        bool getMultiSeason() const;
        int harvest(int &energy);
        bool plantDie();
        std::string subType() const;
        
    private:
        bool multiSeason;
        bool readyToHarvest;
        int harvestYeild;
        int daysToHarvest;
        int harvestsLeft;
};