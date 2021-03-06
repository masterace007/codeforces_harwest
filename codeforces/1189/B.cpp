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
	int n;
	cin >> n;
	vector<int> arr(n);
	for(auto &i: arr)
		cin >> i;
	sort(all(arr));
	for(int i = 1; i < n-1; ++i){
		if(arr[i-1] + arr[i+1] <= arr[i]){
			cout<<"NO"<<endl;
			return;
		}
	}

	if(arr[n-1] >= arr[n-2] + arr[n-3]){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	sort(all(arr),greater<>());
	for(int i = 0; i < n; i += 2)
		cout<<arr[i]<<" ";
	vector<int> arr_temp;
	for(int i = 1; i < n; i += 2)
		arr_temp.push_back(arr[i]);
	reverse(all(arr_temp));
	for(auto x : arr_temp)
		cout<<x<<" ";
	cout<<endl;
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