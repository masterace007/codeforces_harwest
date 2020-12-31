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
	int arr[4]={0},d;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> d;
	int count = 0;
	set<int> damage;
	for(int i = 0; i < 4 ; ++i){
		for(int j = arr[i] ; j <= d ; j+=arr[i] ){
			damage.insert(j);
		}
	}
	//for(auto x : damage)
	//cout<<x<<" ";
	//cout<<endl;
	cout<<damage.size()<<endl;
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