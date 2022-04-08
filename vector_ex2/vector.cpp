#include <iostream>
#include <vector>
#include <iterator>
//#include <complex>

using namespace std;
//using cplx = complex<double>

int main()
{
    vector<int> v1; // constract null vector
    v1.push_back(2); // add element
    v1.push_back(3);
    v1.push_back(4);
    std::copy(begin(v1),end(v1), std::ostream_iterator<int>(std::cout,","));
    cout << endl;

    vector<int> v2(4); // constract vector with 4 elements
    for(int i=0; i< 4; ++i){
        v2[i] = i+1;
        cout << v2[i] << endl;
    }

    vector<int> v3{ 1, 2, 3, 4};
    std::copy(begin(v3),end(v3), std::ostream_iterator<int>(std::cout,","));
    cout << endl;

    vector<int> v4{1, 2, 3, 5};
    std::copy(begin(v4),end(v4), std::ostream_iterator<int>(std::cout,","));
    cout << endl;

    cout << (v1 == v2 ? "equal":"not equal") << endl;

    for(auto x : v3) cout << x << ",";
    cout << endl;

    for (auto &x : v3) ++x;
    for(auto x : v3) cout << x << ",";
    cout << endl;

    /*
    vector<cplx> v;
    cplx z(3.,4.);
    v.puch_back(z);
    v.emplace_back(1.,2.);

    for(auto v :x) cout << x << ",";
    cout << endl;
    */

    return 0;
}
