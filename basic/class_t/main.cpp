#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
    CSample obj1,obj2;  // assume CSample as obj
    int num1, num2;

    cout << "input first integer: " << endl;
    cin >> num1;
    cout << "input second integer: " << endl;
    cin >> num2;

    obj1.set( num1 ) ; // set member_variable of CSample
    obj2.set( num2 ) ; // set member_variable of CSample
    cout << obj1.get() << endl; // output value of member_variable
    cout << obj2.get() << endl; // output value of member_variable

    return 0 ;
}
