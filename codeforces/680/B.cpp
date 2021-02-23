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
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	for(auto &i: arr)
		cin >> i;
	int min_element = min(n-k,k-1);
	int temp_position = k - 1;
	int count = 0;
	if(arr[temp_position] == 1)
		count++;
	for(int i = temp_position - min_element,j = temp_position + min_element; i < j; ++i,--j) {
		if (arr[i] == arr[j] && arr[i] == 1) {
			count += 2;
		}
	}

	for(int i = temp_position - min_element-1; i >= 0; --i)
		if(arr[i] == 1)
			count++;
	for(int i = temp_position + min_element+1; i < n; ++i)
		if(arr[i] == 1)
			count++;

	cout<<count<<endl;
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