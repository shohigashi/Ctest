/*#include <iostream>
#include <string>
#include <iterator>
#include <random>
#include <algorithm>
*/
#include <bits/stdc++.h>

std::tuple<int, int, std::string> GetTuple()
{
    return{20,40,"ABC"};
}
int main()
{
    const  std::string in = "ABCDEFG";
    constexpr  int N = 3;
    std::string out;

    std::sample(in.begin(), in.end(), std::back_inserter(out), N, std::mt19937{std::random_device{}()});
    std::cout << out << std::endl;
    auto [a,b,c] = GetTuple();
    std::cout << a << b << c << std::endl;
}
