#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long n; cin >> n;
    long long sum = 0;
    for (long long i = 0; i < n-1; i++) {
        int cur; cin >> cur;
        sum += cur;
    }
    cout << (((n + 1) * n)/2) - sum << endl;
}