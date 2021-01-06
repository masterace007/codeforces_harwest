#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        int L = max(min(a, b), c - r);
        int R = min(max(a, b), c + r);
        cout << max(a, b) - min(a, b) - max(0, R - L) << endl;
    }
}