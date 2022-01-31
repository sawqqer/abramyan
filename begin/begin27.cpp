#include <bits/stdc++.h>

int main() { 
    using namespace std;
    int a;    // a^2 a^4 a^8
    cin >> a;
    a*=a;
    cout << "a^2 = " << a << endl;
    a*=a;
    cout << "a^4 = " << a << endl;
    a*=a;
    cout << "a^8 = " << a << endl;
	return 0;   
}