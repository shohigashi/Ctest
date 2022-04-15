#include "calc.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  CCalc<int> i1;
  CCalc<string> i2;
  i1.set(1,2);
  i2.set("ABC","DEF");
  cout << i1.add() << endl;
  cout << i2.add() << endl;
  return 0;
}
