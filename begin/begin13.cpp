#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    int r1, r2, s1, s2, s3;
    cin >> r1 >> r2;
    float pi = 3.14;
    s1 = pi*(r1*r1);
    s2 = pi*(r2*r2);
    s3 = s1-s2;
    cout << "S1 = " << s1 << '\n' <<"S2 = " << s2 << '\n' << "S3 = " << s3 << '\n';
    return 0;
}