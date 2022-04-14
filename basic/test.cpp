#include <iostream>
#include <string>
#include <iterator>
#include <random>
#include <algorithm>

//#include <bits/stdc++.h>


int main()
{
    const  std::string in = "ABCDEFG";
    constexpr  int N = 3;
    std::string out;

    std::sample(in.begin(), in.end(), std::back_inserter(out), N, std::mt19937{std::random_device{}()});
    std::cout << out << std::endl;
}
