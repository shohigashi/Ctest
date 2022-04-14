#include <iostream>

using namespace std;

void ref(int&);
void print(int);

int main()
{
    // input integer
    int n = 5;
    print(n);
    // call by reference 
    ref(n);
    print(n);
    return 0;
}

void ref(int& n)
{
    n = 1;
}
void print(int n){
    cout << "n=" << n<< endl;
}
