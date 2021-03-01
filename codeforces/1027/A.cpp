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
	string str;
	cin >> str;
	for(int i = 0,j = n-1; i < j; ++i, --j){
		if(str[i] != str[j]){
			int num_1 = str[i] -'a';
			int num_2 = str[j] -'a';
			int a_num_1 = max(0LL,num_1-1) % 26;
			int b_num_1 = max(0LL,num_1+1) % 26;
			int a_num_2 = max(0LL,num_2-1) % 26;
			int b_num_2 = max(0LL,num_2+1) % 26;

			if(num_1 == 0){
				if(num_2 != 2){
					cout<<"NO"<<endl;
					return;
				}
				continue;
			}
			else if(num_1 == 25){
				if(num_2 != 23){
					cout<<"NO"<<endl;
					return;
				}
				continue;
			}

			if(num_2 == 0){
				if(num_1 != 2){
					cout<<"NO"<<endl;
					return;
				}
				continue;
			}
			else if(num_2 == 25){
				if(num_1 != 23){
					cout<<"NO"<<endl;
					return;
				}
				continue;
			}

			if(a_num_1 == a_num_2 || a_num_1 == b_num_2 || b_num_1 == a_num_2 || b_num_1 == b_num_2)
				continue;
			else{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;

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