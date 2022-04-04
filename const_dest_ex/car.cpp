#include "car.h"
#include <iostream>

using namespace std;

// constractor
CCar::CCar() : m_fuel(0),m_migration(0)
{
    cout << "Generate CCar object" << endl;
}
// destoractor
CCar::~CCar()
{
    cout << "Discard CCar object" << endl;
}

void CCar::move()
{
    // move if it has fuel
    if (m_fuel >= 0){
        m_migration++;
        m_fuel--;
    }
    cout << "Migration length: " << m_migration << endl;
    cout << "Amount of fuel: " << m_fuel << endl;
}

void CCar::supply(int fuel)
{
    if (fuel > 0){
        m_fuel += fuel;
    }
    cout << "Amount of fuel: " << m_fuel << endl;
}
