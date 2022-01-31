#include <bits/stdc++.h>

int main() { 
    using namespace std;
    float v1, v2, s, t;
    scanf("%f%f%f%f", &v1, &v2, &s, &t);
    printf("S = %f", abs(s-(v1*t+v2*t)));
	return 0;   
}