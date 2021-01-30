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

void solve() {
	char ch;
	cin >> ch;
	string str;
	cin >> str;
	char arr[] = {'q','w','e','r','t','y','u','i','o','p',
			'a','s','d','f','g','h','j','k','l',';',
			'z','x','c','v','b','n','m',',','.','/'};
	int len = sizeof(arr)/sizeof(arr[0]);
	vector<int> record;
	for(char i : str){
		for(int j = 0; j < len; ++j){
			if(i == arr[j]){
				record.emplace_back(j);
				break;
			}
		}
	}
	if(ch == 'R'){
		for(auto x: record)
			cout<<arr[x-1];
		cout<<endl;
	}
	else{
		for(auto x : record)
			cout<<arr[x+1];
		cout<<endl;
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
