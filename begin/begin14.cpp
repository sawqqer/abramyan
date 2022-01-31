#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    float pi = 3.14;
    int L; 
    cin >> L; // L = 2piR
    double R = L/(2*pi);
    double S = pi*(R*R);
    cout << "R = " << R << '\n' << "S = " << S;
    return 0;
}