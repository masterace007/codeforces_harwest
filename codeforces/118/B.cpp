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
	n++;
	int max_no_stars = n;
	int temp = 1;
	int temp_temp;
	for(int i = 1; i <= n; ++i){
		temp_temp = 0;
		for(int k = 0; k < max_no_stars - temp; ++k)
			cout<<"  ";
		if(temp == 1) {
			cout << temp_temp;
			temp_temp++;
		}
		else {
			for (int k = 0; k < temp; ++k) {
				cout << temp_temp << " ";
				temp_temp++;
			}
		}

		temp_temp--;
		for(int k = 0; k < temp-2; ++k) {
			temp_temp--;
			cout << temp_temp <<" ";
		}
		if(temp_temp > 0)
			cout<<--temp_temp<<endl;
		else
			cout<<endl;
		temp += 1;

	}
	temp = max_no_stars - 1;
	for(int i = 2; i<= n; ++i){
		temp_temp = 0;
		for(int k = 0; k < max_no_stars-temp; ++k)
			cout<<"  ";
		if(temp == 1) {
			cout << temp_temp;
			temp_temp++;
		}
		else {
			for (int k = 0; k < temp; ++k) {
				cout << temp_temp << " ";
				temp_temp++;
			}
		}
		temp_temp--;
		for(int k = 0; k < temp-2; ++k) {
			temp_temp--;
			cout << temp_temp <<" ";
		}
		if(temp_temp)
			cout<<--temp_temp<<endl;
		else
			cout<<endl;
		temp -= 1;
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