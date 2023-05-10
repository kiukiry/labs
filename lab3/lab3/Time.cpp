#include "Time.h"

Pair::Pair() {
    first = 0;
    second = 0.0;
}

Pair::Pair(int f, double s) {
    first = f;
    second = s;
}

Pair Pair::operator-(const Pair& p) const {
    return Pair(first - p.first, second - p.second);
}

Pair Pair::operator+(const int& x) const {
    return Pair(first + x, second);
}

Pair Pair::operator+(const double& x) const {
    return Pair(first, second + x);
}

void Pair::vivod() const {
    cout << first << " : " << second << endl;
}