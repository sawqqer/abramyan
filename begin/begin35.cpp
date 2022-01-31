#include <bits/stdc++.h>

int main() { 
    using namespace std;  //  v = скорость лодки в стоячей воде U = скорость течения реки
    int V, U, T1, T2;
    //время движения лодки по озеру T1     а против течения T2  
    // S = T*V;

    scanf("%d%d%d%d", &V, &U, &T1, &T2);
    float S = V*T1 + (V-U) * T2;
    printf("S = %f", S);
	return 0;   
}