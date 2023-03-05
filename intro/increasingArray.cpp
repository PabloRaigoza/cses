#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        long long cur; cin >> cur;
        v[i] = cur;
    }

    long long total = 0;
    for (int i = 1; i < n; i++) {
        long long cur = v[i], past = v[i-1];
        if (cur < past) total+=(past-cur), v[i] = past;
    }
    cout << total << '\n';
}