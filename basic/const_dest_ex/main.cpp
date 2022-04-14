#include "car.h"
#include <iostream>

using namespace std;

int main()
{
/*
    int m_fuel;
    CCar c;
    c.supply(10);
    c.move();
    c.move();
*/

    CCar* pC = 0;
    pC = new CCar();
    pC->supply(10);
    pC->move();
    pC->move();
    delete pC;
    cout << "delete instance" << endl;

    return 0;
}
