#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(pow((x2-x1),2) + pow((y2-y1),2)) << '\n';
    return 0;
}