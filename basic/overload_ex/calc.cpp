#include "calc.h"

// default constractor
CCalc::CCalc() : m_a(0), m_b(0)
{
}
// constractor with argument
CCalc::CCalc(int a, int b): m_a(a), m_b(b)
{
}


// addition 1
int CCalc::add()
{
    return m_a + m_b;
}

// addtion 2
int CCalc::add(int a, int b)
{
    return a + b;
}
// set value
void CCalc::setValue(int a, int b)
{
    m_a = a; m_b = b;
}

// get value m_a
int CCalc::getA()
{
    return m_a;
}
// get value m_b
int CCalc::getB()
{
    return m_b;
}

