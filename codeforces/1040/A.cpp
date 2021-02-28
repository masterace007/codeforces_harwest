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
	int n,a,b;
	cin >> n >> a >> b;
	vector<int> arr;
	string temp_str;
	for(int i = 0; i < n; ++i){
		int temp;
		cin >> temp;
		temp_str += to_string(temp);
	}
	int cost = 0;
	for(int i = 0, j = n-1; i < j; ++i,--j){
		if(temp_str[i] != temp_str[j]){
			if((temp_str[i] == '1' && temp_str[j] == '2') || (temp_str[i] == '2' && temp_str[j] == '1'))
				cost += b;
			else if((temp_str[i] == '0' && temp_str[j] == '2') || (temp_str[i] == '2' && temp_str[j] == '0'))
				cost += a;
			else{
				cout<<-1<<endl;
				return;
			}
		}
		else if(temp_str[i] == temp_str[j] && temp_str[i] == '2')
			cost += (2*min(a,b));
	}
	if(n % 2 == 1){
		int num = n/2;
		if(temp_str[num] == '2')
			cost += (min(a,b));
	}
	cout<<cost<<endl;
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