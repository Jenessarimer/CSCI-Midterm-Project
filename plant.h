#include <string>

class Plant {
    public:
        Plant(std::string sName="", int sCost = 0, int sWater = 0, std::string sSeason="", int pSize = 0);
        void setName(std::string name);
        void setSeedCost(int seedCost);
        void setWaterLevel(int waterlevel);
        void setSeason(std::string Season);
        void setDaysPlanted(int daysPlanted);
        void setNeedWater(bool needWater);
        void setPlantSize(int plantSize);
        std::string getName() const;
        int getSeedCost() const;
        int getWaterLevel() const;
        std::string getSeason() const;
        int getDaysPlanted() const;
        bool getNeedWater() const;
        int getPlantSize() const;
        virtual bool plantDie() = 0;
        virtual std::string subType() const = 0;
        bool isCompatible(const Plant &p) const;

    private:
        std::string name;
        int seedCost;
        int waterlevel;
        std::string Season;
        int daysPlanted;
        bool needWater;
        int plantSize;
};
