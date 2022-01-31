#include <bits/stdc++.h>

int main() { 
    using namespace std;
    double A,B,C,x,y;
    cin >> A >> B >> C;
	x = C;
	C = A;
	y = B;
	B = x;
	A = y;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
	return 0;
}