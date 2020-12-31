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
	int arr[5][5];
	int x = 0,y = 0;
	for(int i = 0; i < 5 ; ++i){
		for(int j = 0; j < 5; ++j){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				x = i+1;
				y = j+1;
			}
		}
	}
	int moves = abs(3-x) + abs(3-y);
	cout<<moves<<endl;
	
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