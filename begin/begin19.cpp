#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    float x1, y1, x2, y2; // 2*(|x1-x2| + |y1-y2|)
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "P: " << 2*abs(x1-x2) + abs(y1-y2) << '\n';
    cout << "S: " << abs(x1-x2)*abs(y1-y2);
    return 0;
}