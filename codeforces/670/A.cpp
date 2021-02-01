//
// Created by smoking_ace on 06-01-2021.
//
#include "bits/stdc++.h"
#define endl       '\n'
#define pi         3.141592653590
#define pb         push_back
#define mod        1000000007
#define int        long long int
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

void solve(){
	int n;
	cin >> n;
	if(n % 7 == 0){
		int num = n/7 * 2;
		cout<<num<<" "<<num<<endl;
		return;
	}
	if(n < 7 ){
		int holiday = 0;
		if(n >= 2)
			holiday = 2;
		else
			holiday = 1;
		if(n == 6)
			cout<<1<<" "<<2<<endl;
		else
			cout<<0<<" "<<holiday<<endl;
		return;
	}
	int holiday = n/7 * 2;
	int rem = n%7;
	if(rem == 6)
		cout<<holiday+1<<" ";
	else
		cout<<holiday<<" ";
	if(rem >= 2)
		holiday += 2;
	else if( rem == 1)
		holiday += 1;
	cout<<holiday<<endl;


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
