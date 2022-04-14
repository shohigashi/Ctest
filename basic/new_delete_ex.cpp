#include <iostream>

using namespace std;

int main()
{
    int *p = 0;
    p = new int(); // dynamically allocate memory of int type
    *p = 123;
    cout << *p << endl;
    delete p; // release allocated memory


    int *s = 0;
    p = new int[10];
    for(int i = 0; i<10;++i)
    {
        p[i] = i;
        cout << p[i] << endl;
    }
    delete [] p;

    return 0;
}
