#include "plant.h"

class Food : public Plant{
    public:
        Food();
        void setReadyToPick();
        void setNumHarRem();

    private:
        bool multiSeasonal;
        bool readyToPick;
        int numHarRem;
        int amountProduced;
        const int growingDays;
};