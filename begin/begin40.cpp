#include <bits/stdc++.h>

int main() { 
    using namespace std;
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int D = a1*b1 - a2*b2;
    float x = (c1*b2-c2*b1)/D;
    float y = (a1*c2-a2*c1)/D;
    cout << x << " " << y;
	return 0;   
}