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

using namespace std;
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	int temp = n;
	int cnt2 = 0, cnt3 = 0;
	while(temp % 2 == 0){
		temp /= 2;
		++cnt2;
	}
	temp = n;
	while(temp%3 == 0){
		temp /= 3;
		++cnt3;
	}
	int num = pow(2,cnt2) * pow(3,cnt3);
	if(num  == n){
		if(cnt2 > cnt3)
			cout<<-1<<endl;
		else{
			cout<<2*cnt3 - cnt2<<endl;
		}
	}
	else
		cout<<-1<<endl;
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
    cin >> t;
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
