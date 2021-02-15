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
	vector<int> arr(n);
	int count_negative = 0, count_zeros = 0;
	vector<int> arr_negative;
	int operation = 0;
	for(auto &i: arr){
		cin >> i;
		if(i > 0){
			operation += (i - 1);
		}
		else if(i < 0){
			count_negative++;
			arr_negative.emplace_back(i);
		}
		else
			count_zeros++;
	}
	sort(all(arr_negative));
	int record = 0;
	for(int i = 0; i < count_negative-1; i += 2){
		operation += (abs(arr_negative[i] + arr_negative[i+1])-2);
	}
	if(count_zeros > 0 && count_negative % 2 == 1){
		count_zeros--;
		operation++;
		operation += (abs(arr_negative[count_negative-1])-1);
	}
	else if(count_zeros == 0 && count_negative % 2 == 1)
		operation += (abs(arr_negative[count_negative-1])+1);
	operation += count_zeros;
	cout<<operation<<endl;

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