#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    int x, a, y, b; // x kg chocolate - A rub, Y kg iris - B rub
    cin >> x >> a >> y >> b;
    cout << "For 1 kilo of Chocolate candy: " << a/x << '\n' << "For 1 kilo of Iris candy: " << b/y << endl;
    cout << "Chocolate candies expensive than iris for " << ((a/x)/(b/y)) <<" times" <<endl;
    return 0;
}