#include <bits/stdc++.h>

int main() { 
    using namespace std;
    int a, x, y; //берем пример 2
    cin >> a;
    x = a*a; // x = 2*2
    cout << "a^2: " << x << endl;
    y = a*x;  // 2*4
    cout << "a^3: " << y << endl;
    x*=y; //4*8
    cout << "a^5: " << x << endl;
    y = x; // y = 32;
    x = y*y; // x = 1024;
    cout << "a^10: " << x << endl;
    x*=y; // 1024 * 32
    cout << "a^15: " << x << endl;
	return 0;   
}