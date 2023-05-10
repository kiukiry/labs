#pragma once

#include <iostream>
using namespace std;

class Pair {
    int first;
    double second;

public:
    Pair();
    Pair(int f, double s);
    Pair operator-(const Pair& p) const;
    Pair operator+(const int& x) const;
    Pair operator+(const double& x) const;
    void vivod() const;
};


