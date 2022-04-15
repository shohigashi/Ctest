#ifndef MHD_HH
#define MHD_HH

#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <array>
#include <tuple>
#include <cmath>

// grid number
constexpr size_t XN = 200, YN = 200, ZN = 200;
// number of file output
constexpr size_t PN = 100;
// number of variables
constexpr size_t VN = 11;
// domain size
constexpr double XL = 2.0*M_PI, YL = 2.0*M_PI, ZL = 2.0*M_PI;
constexpr double TL = M_PI;
//grid size
constexpr double dx = XL/XN, dy = YL/YN, dz = ZL/ZN;
// CFL number
constexpr double CFL = 0.4
// specific heat ratio
constexpr double gam = 5.0/3.0;
// Divergence cleaning parameter ( Dedner et al., 2002)
constexpr double cr = 0.18;

// multi dimensional array
template<typename T, size_t... N>
struct ndarray;
template<typename T>
struct ndarray<T> {
    using type = T;
};

