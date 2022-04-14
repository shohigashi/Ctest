#include <iostream>

using namespace std;

bool judge(int);

int main()
{
    int n;
    cout << "input integer :";
    cin >> n;
    if (judge(n)){
        cout << "This number is greater than or equal 0. " << endl;
    }else{
        cout << "This number is less than 0." << endl;
    }
    return 0;
}

bool judge(int n){
    if (n >= 0){
        return true;
    }else{
        return false;
    }
}

