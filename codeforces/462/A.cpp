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
	char arr[n][n];
	vector<pair<int,int>> arr_check;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> arr[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			count = 0;
			if(arr[i-1][j] == 'o' && i-1 > -1 && j > -1 && i-1 < n && j < n)
				count++;
			if(arr[i+1][j] == 'o' && i+1 > -1 && j > -1 && i+1 < n && j < n)
				count++;

			if(arr[i][j-1] == 'o' && i > -1 && j-1 > -1 && i < n && j-1 < n) {
				count++;
			}
			if(arr[i][j+1] == 'o' && i > -1 && j+1 > -1 && i < n && j+1 < n)
				count++;

			if(count % 2 == 1){
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
