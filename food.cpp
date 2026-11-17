#include "food.h"

Food::Food()
{
}

void Food::setHarvestYield(int amt)
{
}

void Food::setDaysToHarvest(int d)
{
}

void Food::setReadyToHarvest(bool r)
{
}

void Food::setHarvestsLeft(int c)
{
}

void Food::setMultiSeason(bool m)
{
}

int Food::getHarvestYield() const
{
    return 0;
}

int Food::getDaysToHarvest() const
{
    return 0;
}

bool Food::getReadyToHarvest() const
{
    return false;
}

int Food::getHarvestsLeft() const
{
    return 0;
}

bool Food::getMultiSeason() const
{
    return false;
}

int Food::harvest(int &energy)
{
    return 0;
}

bool Food::plantDie()
{
    return false;
}

std::string Food::subType() const
{
    return std::string();
}
