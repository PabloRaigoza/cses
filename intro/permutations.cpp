#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    if (n == 2 or n == 3) cout << "NO SOLUTION\n";
    else if (n == 4) cout << "2 4 1 3\n";
    else {
        for (int i = 1; i <= n; i+=2) {
            cout << i << ' ';
        }
        for (int i = 2; i <= n; i+=2) {
            cout << i << ' ';
        } cout << '\n';
    }
}

// 1 - work
// 2 - no sol
// 3 - no sol
// 4 - no sol
// 5 - 1 3 5 2 4
// 1 3 5 2 4 6
// 1 3 5 7 2 4 6
