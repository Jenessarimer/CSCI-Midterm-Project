#include "field.h"

Field::Field(int squares) : Land(squares)
{
    if(squares >= 0 || squares < getTotalSquares()){
        capacity = squares;
    }else capacity = 0;
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
