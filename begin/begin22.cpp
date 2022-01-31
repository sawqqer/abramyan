#include <bits/stdc++.h>

int main() { 
    using namespace std;
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << " b: " << b;
    return 0;
}