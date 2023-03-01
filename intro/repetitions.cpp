#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string s; cin >> s;
    long long longestConsec = 1;
    long long curConsec = 1; char cur = s[0];
    for (long long i = 1; i < (long long) s.size(); i++) {
        if (s[i] != cur) {
            if (curConsec > longestConsec) longestConsec = curConsec;
            curConsec = 1;
            cur = s[i];
        } else {
            curConsec++;
        }
    } if (curConsec > longestConsec) longestConsec = curConsec;
    cout << longestConsec << '\n';
}
