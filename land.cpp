#include "land.h"

Land::Land(int squares, int occupied)
{
    if(squares >= 0){
        setTotalSquares(squares);} 
    else setTotalSquares(0);

    if(occupied >= 0 ){
        setOccupSquares(occupied);}
    else setTotalSquares(0);
}

void Land::setTotalSquares(int totalSquares)
{
    this-> totalSquares = totalSquares;
}

int Land::getTotalSquares() const
{
    return totalSquares;
}

void Land::setOccupSquares(int occupSquares)
{
    this->occupSquares = occupSquares;
}

int Land::getOccupSquares() const
{
    return occupSquares;
}
