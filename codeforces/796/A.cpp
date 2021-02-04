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

void solve() {
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	m--;
	int record_left  = INT_MIN;
	int record_right = INT_MIN;
	for(int i = m-1; i >= 0; --i){
		if(arr[i] > 0 && arr[i] <= k){
			record_left = i;
			break;
		}
	}
	for(int i = m+1; i < n; ++i){
		if(arr[i] > 0 && arr[i] <= k){
			record_right = i;
			break;
		}
	}
	if(record_left != INT_MIN && record_right != INT_MIN){
		int num = min(abs(m - record_left),abs(m - record_right));
		cout<<num*10<<endl;
	}
	else if(record_left == INT_MIN && record_right != INT_MIN){
		record_right =  record_right - m;
		cout<<record_right*10<<endl;
	}
	else{
		record_left = m - record_left;
		cout<<record_left*10<<endl;
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