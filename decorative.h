#include "plant.h"

class Decorative : public Plant{
    public:
        Decorative();
        void setDaysInBloom(int d);
        void setIsPerennial(bool p);
        int getDaysInBloom() const;
        bool getIsPerennial() const;
        bool plantDie();
        std::string subType() const;

    private:
        int daysInBloom;
        bool isPerennial;
};
