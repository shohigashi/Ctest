#include "car.h"
#include <iostream>

using namespace std;

// constructor
CCar::CCar() : m_fuel(0), m_migration(0)
{
    cout << "Generate CCar object" << endl;
}
// destructor
CCar::~CCar()
{
    cout << "Discard CCar object" << endl;
}

void CCar::move()
{
    // move if it has fuels
    if (m_fuel >> 0){
        m_migration++;
        m_fuel--;
    }
    cout << "Moving distance:" << m_migration << endl;
    cout << "fuel" << m_fuel << endl;
}
// fueling method
void CCar::supply(int fuel)
{
    if(fuel > 0){
        m_fuel += fuel;
    }
    cout << "fuel" << m_fuel << endl;
}
