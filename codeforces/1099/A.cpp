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
	int w,h,u1,d1,u2,d2;
	cin >> w >> h >> u1 >> d1 >> u2 >> d2;
	pair<int,int> p;
	vector<pair<int,int>> arr;
	p.first = d1; p.second = u1;
	arr.emplace_back(p);
	p.first = d2; p.second = u2;
	arr.emplace_back(p);
	sort(all(arr),greater<>());

	while(h > arr[0].first) {
		w += h;
		h--;
	}
	w += h;
	w -= arr[0].second;
	h--;
	if( w < 0)
		w = 0;

	while( h > arr[1].first){
		w += h;
		h--;
	}
	w += h;
	w -= arr[1].second;
	h--;
	if(w < 0)
		w = 0;
	while( h > 0){
		w += h;
		h--;
	}
	cout<<w<<endl;
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