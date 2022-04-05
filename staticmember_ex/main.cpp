#include "rat.h"
#include <iostream>

using namespace std;

int main()
{
    Crat *r1, *r2, *r3;
    r1 = new Crat();
    r1 -> squeak();
    Crat::showNum();
    r2 = new Crat();
    r3 = new Crat();
    r2 -> squeak();
    r3 -> squeak();
    delete r1;
    delete r2;
    Crat::showNum();
    delete r3;
    Crat::showNum();
    return 0;
}
