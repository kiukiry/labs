#include <iostream>
#include "Time.h"
#include <cmath>
using namespace std;

int main() {
    int f1;
    double s1;
    cout << "1first: ";
    cin >> f1;
    cout << "1second: ";
    cin >> s1;
    Pair p1(f1, s1);

    int f2;
    double s2;
    cout << "2first: ";
    cin >> f2;
    cout << "2second: ";
    cin >> s2;
    Pair p2(f2, s2);

    Pair p3 = p1 - p2;
    p3.vivod(); 

    double x;
    cout << "enter const: ";
    cin >> x;
    if (std::floor(x) == x) {
        int y = x;
        Pair p4 = p3 + y;
        p4.vivod(); 
    }
    else {
        Pair p4 = p3 + x;
        p4.vivod(); 
    }

    return 0;
}