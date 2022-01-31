#include <bits/stdc++.h>
using namespace std;  
int main() { 
    double a, b, c;

    cin >> a >> b >> c;

    double AC = abs(a-c);
    double BC = abs(b-c);

    cout << AC << " " << BC << " " << AC+BC;
    return 0;
}