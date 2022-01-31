#include <bits/stdc++.h>

int main() { 
    using namespace std; // Ax^2 + Bx + C = 0
    int a, b, c, x1, x2; // 3x^2 - 4x - 7 = 0
    cin >> a >> b >> c;
    float D = (b*b)-4*a*c;
    if(D > 0) {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        cout << "x1: " << x1 << "\nx2: " << x2;
    } else if (D == 0) {
        x1 = (-b + sqrt(D))/(2*a);
        cout << "x1: " << x1 <<'\n';
    } else cout << "D is less than 0" << '\n';
	return 0;
}