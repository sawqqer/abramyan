#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    float pi = 3.14;
    int s;
    cin >> s; // L = 2piR   S = piR^2
    double r = sqrt(s/pi);
    double l = 2*pi*r;
    double d = 2*r;
    cout << "D: " << d << '\n' << "L: " << l;
    return 0;
}