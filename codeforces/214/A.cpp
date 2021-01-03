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
	int n,m;
	cin >> n >> m;
	vector < pair<int,int> > arr;
	int count = 0;
	for(int i = 0; i <= n ; ++i){
		int num = n - i;
		bool flag = false;
		int record = -1;
		for(int j = 0 ; j <= num ; ++j){
			if(j * j == num){
				flag = true;
				record = j;
				break;
			}
		}
		if(flag){
			arr.push_back(make_pair(i,record));
		}
	}

	for(auto [x,y] : arr){
		int num = pow(x,2) + y;
		if(num == m){
			count++;
		}
	}
	cout<<count<<endl;


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