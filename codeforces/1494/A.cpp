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
bool bracket_sequence(string &str, char x, char y){
	int bal = 0;
	for(char i : str){
		if(bal < 0)
			return false;
		if(i == x)
			bal += 1;
		else if(i == y)
			bal -= 1;
	}
	if(bal == 0)
		return true;
	else
		return false;
}

void solve(){
	string str;
	cin >> str;
	int n = str.length();
	char ch = str[0];
	if(str[0] == str[n-1]){
		cout<<"NO"<<endl;
		return;
	}
	map<char,int> arr;
	for(char c: str)
		arr[c]++;
	char first = str[0],last = str[n-1];
	for(int i = 0; i < n; ++i){
		if(str[i] == ch)
			str[i] = '(';
	}
	ch = str[n-1];
	for(int i = 0; i < n; ++i){
		if(ch == str[i] )
			str[i] = ')';
	}
	if(arr[first] > arr[last]){
		for(char & i : str){
			if(isalpha(i))
				i = ')';
		}
	}
	else{
		for(char &i: str){
			if(isalpha(i))
				i = '(';
		}
	}

	char x = '(',y = ')';
	bool flag = bracket_sequence(str,x,y);
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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