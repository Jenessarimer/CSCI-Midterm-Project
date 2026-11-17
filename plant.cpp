#include "plant.h"

Plant::Plant(std::string sName, int sCost, int sWater, std::string sSeason, int pSize)
{
   setName(sName);
   setSeason(sSeason);
   if(sCost > 0) setSeedCost(sCost);
   if(sWater > 0) setWaterLevel(sWater);
   if(pSize > 0) setPlantSize(pSize);
   daysPlanted = 0;
   needWater = true;
}

void Plant::setName(std::string name)
{
    this-> name = name;
}

void Plant::setSeedCost(int seedCost)
{
    this-> seedCost = seedCost;
}

void Plant::setWaterLevel(int waterlevel)
{
    this-> waterlevel = waterlevel;
}

void Plant::setSeason(std::string Season)
{
    this-> Season = Season;
}

void Plant::setDaysPlanted(int daysPlanted)
{
    this-> daysPlanted = daysPlanted;
}

void Plant::setNeedWater(bool needWater)
{
    this-> needWater = needWater;
}

void Plant::setPlantSize(int plantSize)
{
    this-> plantSize = plantSize;
}

std::string Plant::getName() const
{
    return name;
}

int Plant::getSeedCost() const
{
    return seedCost;
}

int Plant::getWaterLevel() const
{
    return waterlevel;
}

std::string Plant::getSeason() const
{
    return Season;
}

int Plant::getDaysPlanted() const
{
    return daysPlanted;
}

bool Plant::getNeedWater() const
{
    return needWater;
}

int Plant::getPlantSize() const
{
    return plantSize;
}

bool Plant::isCompatible(const Plant &p) const
{
    return (Season == p.getSeason() && plantSize == p.getPlantSize() && waterlevel == p.getWaterLevel() && subType() == p.subType());
}
