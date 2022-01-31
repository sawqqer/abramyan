#include <bits/stdc++.h>

int main() { 
    using namespace std;
    double a,b,c,x,y;
    cin >> a >> b >> c;
	x = b;
	b = a;
	y = c;
	c = x;
	a = y;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	return 0;   
}