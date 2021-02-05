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
	int n,k;
	cin >> n >> k;
	string str;
	cin >> str;
	map<char,int> arr;
	transform(str.begin(),str.end(),str.begin(),::tolower);
	for(char i : str)
		if(arr.find(i) == arr.end())
			arr.insert(make_pair(i,1));
		else
			arr[i]++;

	char ch = 'a';
	int temp = 0;
	for(auto x : arr){
		if(x.first != ch){
			cout<<"0";
			return;
		}

		if(temp < k)
			ch++;
		else
			break;
	}
	ch = 'a';
	int min_occurrence = INT_MAX;
	for(int i = 0; i < k; ++i){
		min_occurrence = min(min_occurrence,arr[ch]);
		ch++;
	}
	cout<<k*min_occurrence<<endl;
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