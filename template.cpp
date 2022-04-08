#include <iostream>
#include <string>

using namespace std;

template <typename T>
void mySwap(T& x, T& y){
    T tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 1;
    int b =  2;
    cout << "a=" << a << ", b=" << b << endl;
    mySwap(a,b);
    cout << "a=" << a << ", b=" << b << endl;

    double x = 1.23;
    double y = 4.56;
    cout << "x=" << x << ", y=" << y << endl;
    mySwap(x,y);
    cout << "x=" << x << ", y=" << y << endl;

    string s = "abc";
    string t = "xyz";

    cout << "s=" << s << ", t=" << t << endl;
    mySwap(s,t);
    cout << "s=" << s << ", t=" << t << endl;
    return 0;
}
