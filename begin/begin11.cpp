#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << abs(a+b) << '\n' << "Difference: " << abs(a-b) << '\n' << "Product: " << abs(a*b) << '\n' << "Quotient: " << abs((double)a/b); 
    return 0;
}