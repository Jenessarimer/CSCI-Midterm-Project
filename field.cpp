#include "field.h"

Field::Field(int squares) : Land(squares)
{

}

void Field::waterField(int &energy)
{
}

void Field::advanceDay()
{
}

void Field::endSeason()
{
}

bool Field::plantCrop(const Food &f, std::string season)
{
    return false;
}

int Field::harvestField(int &energy)
{
    return 0;
}

Field::~Field()
{
}
