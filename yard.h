#include "land.h"
#include "decorative.h"

class Yard : public Land {
    public :
        Yard(int squares = 0);
        void waterYard(int& energy);
        void advanceDay();
        void endSeason();
        bool plantFlower(const Decorative& d, std::string s);
        ~Yard();
    private:
        int numPlants;
        int capacity;
        Decorative* declist;
};