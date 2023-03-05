#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        long long y, x; cin >> x >> y;
        if (x < y) {
            long long diagonal = y*(y-1)+1;
            if (y % 2 == 0) cout << diagonal - y + x << '\n';
            else cout << diagonal + y - x << '\n';
        } else if (x > y) {
            long long diagonal = x*(x-1)+1;
            if (x % 2 == 0) cout << diagonal + x - y << '\n';
            else cout << diagonal - x + y << '\n';
        } else {
            cout << x*(x-1)+1 << '\n';
        }
    }
}