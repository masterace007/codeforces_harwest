//
// Created by smoking_ace on 06-01-2021.
//
#include "bits/stdc++.h"
#define endl       '\n'
#define pi         3.141592653590
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false;}

using namespace std;
using namespace chrono;

void solve() {
	int a,b,column = 0;
	int total = 0;
	cin >> a >> b;

	if(a == 1 || b == 1) {
		cout << 1 << endl;
		return;
	}

	if(b % 2 == 0)
		column = b/2;
	else
		column = (b+1)/2;

	if(a % 2 == 0){
		total += (column * (a/2));
		a  -= (a/2);
	}
	else{
		total += (column * ((a+1)/2));
		a  -= ((a+1)/2);
	}

	if(b % 2 == 0){
		total += column*a;
	}
	else
		total += (column-1)*a;
	cout<<total<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    fastio();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    auto start1 = high_resolution_clock::now();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
    return 0;
}
