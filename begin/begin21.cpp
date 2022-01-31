#include <bits/stdc++.h>

int main() { 
    using namespace std; 
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    float a, b, c;

    a = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	c = sqrt(pow((x2-x3),2)+pow((y2-y3),2));

    int P = a+b+c;
    int p = P/2;
    int S = sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout << "P: " << P << endl;
    cout << "S: " << S << endl;

    return 0;
}