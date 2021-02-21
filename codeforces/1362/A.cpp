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

int64_t ceil_div(int64_t a, int64_t b) {
	return (a + b - 1) / b;
}

void solve(){
	int a,b;
	cin >> a >> b;
	if(a == b){
		cout<<0<<endl;
		return;
	}
	if(a > b)
		swap(a,b);

	int count = 1;
	int num = 0;
	while(b > num){
		num = pow(2,count);
		if(b/num == a){
			break;
		}
		count++;
	}
	if(pow(2,count)*a == b){
		int rem_3 = 0, rem_2 = 0, rem_1 = 0;
		if(count >= 3) {
			rem_3 = count / 3;
			count %= 3;
		}
		if(count >= 2) {
			rem_2 = count / 2;
			count %= 2;
		}
		rem_1 = count;
		cout<<rem_3 + rem_2 + rem_1<<endl;
	}
	else{
		cout<<-1<<endl;
	}

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