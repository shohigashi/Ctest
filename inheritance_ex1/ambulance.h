#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance : public CCar{
    public:
        // constructor
        CAmbulance();
        // destructor
        virtual ~CAmbulance();
        // rescue oparation
        void savePeople();
    private:
        int m_number;
};

#endif
