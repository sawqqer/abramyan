#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("V = %d\nS = %d", a*b*c, (2*((a*b)+(a*c)+(b*c))));
    return 0;
}