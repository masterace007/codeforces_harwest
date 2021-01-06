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
	cin >> n >> m; int arr[n];int arr_b[m];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	for(int i = 0; i < m; ++i)
		cin >> arr_b[i];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(arr[i] == arr_b[j]){
				cout<<"YES"<<endl;
				cout<<1<<" "<<arr_b[j]<<endl;
				return;
			}
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
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}