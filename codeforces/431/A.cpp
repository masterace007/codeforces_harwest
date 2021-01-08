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
	int a1,a2,a3,a4;
	cin >> a1 >> a2 >> a3 >> a4;
	string str;
	cin >> str;
	int calories = 0;
	for(int i = 1; i<= 4; ++i){
		int count = 0;
		for(int j = 0; j < str.length(); ++j){
			if(str[j]-'0' == i)
				count++;
		}
		if(i == 1)
			calories += count*a1;
		else if(i == 2)
			calories += count*a2;
		else if(i == 3)
			calories += count*a3;
		else
			calories += count*a4;
	}
	cout<<calories<<endl;
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