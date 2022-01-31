#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    int a, b;
    cin >> a >> b;
    int c = sqrt((a*a)+(b*b));
    int P = a+b+c;
    cout << "c is: " << c << '\n' << "P is: " << P;
    return 0;
}