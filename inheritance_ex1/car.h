#ifndef _CAR_H_
#define _CAR_H_

// car class
class CCar{
    public:
        // constructor
        CCar();
        // destructor
        virtual ~CCar();
        // moving method
        void move();
        // fueling method
        void supply(int fuel);
    private:
        int m_fuel;
        int m_migration;
};
#endif // _CAR_H_
