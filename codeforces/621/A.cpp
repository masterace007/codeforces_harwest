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
	int n;
	cin >> n;
	vector<int> arr_even;
	vector<int> arr_odd;
	int count_e = 0, count_o = 0;
	for(int i = 0; i < n; ++i){
		int a;cin >> a;
		if(a % 2 == 0){
			count_e++;
			arr_even.emplace_back(a);
		}
		else{
			count_o++;
			arr_odd.emplace_back(a);
		}
	}
	int sum = 0;
	int num = arr_odd.size();
	if(num % 2 == 0){
		for(int i : arr_even)
			sum += i;
		for(int i : arr_odd)
			sum += i;
	}
	else{
		for(int i : arr_even)
			sum += i;
		num -= 1;
		sort(all(arr_odd),greater<>());
		for(int i = 0; i < num; ++i)
			sum += arr_odd[i];
	}
	cout<<sum<<endl;
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