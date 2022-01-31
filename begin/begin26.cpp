#include <bits/stdc++.h>

int main() { 
    using namespace std;
    int x;           //  4(x−3)^6 − 7(x−3)^3 + 2
    cin >> x;
    cout << (4*pow((x-3), 6)) - (7*pow((x-3), 3)) + 2;
	return 0;   
}