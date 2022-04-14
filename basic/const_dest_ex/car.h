#ifndef _CAR_H_
#define _CAR_H_

class CCar{
    public:
        // constructor
        CCar();
        // destractor
        ~CCar();
        // moving method
        void move();
        // suppliment method
        void supply(int fuel);
    private:
        int m_fuel;  // fuel
        int m_migration; //migration length
};

#endif
