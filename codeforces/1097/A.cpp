#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve() {
	string str;
	cin >> str;
	string str_hand[5];
	for(int i = 0; i < 5; ++i)
		cin >> str_hand[i];
	for(int i = 0; i < 5; ++i){
		if(str[0] == str_hand[i][0]){
			cout<<"YES"<<endl;
			return;
		}
	}
	for(int i = 0; i < 5; ++i){
		if(str[1] == str_hand[i][1]){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}