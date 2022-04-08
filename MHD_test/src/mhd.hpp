#ifndef MHD_HH
#define MHD_HH

#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <array>
#include <tuple>
#include <cmath>

// grid number 
constexpr size_t XN = 200, YN = 200;
// number of file output
constexpr size_t PN = 100;
// number of variables
constexpr size_t VN = 9;
// domain size
constexpr double XL = 200.0, YL = 200.0;
constexpr double TL = 100.0;
//grid size
constexpr double dx = XL/XN, dy = YL/YN;
// CFL number
constexpr double CFL = 0.4

