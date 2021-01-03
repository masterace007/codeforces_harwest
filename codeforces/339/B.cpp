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
	int arr[m];
	for(int i = 0; i < m ; ++i)
		cin >> arr[i];
	int current = 1;
	int count_time = 0;
	for(int i = 0; i < m ; ++i){
		if(arr[i] < current){
			count_time += n - current;
			current = 0;
			count_time +=  arr[i]  - current;
			current = arr[i];
		}
		else{
			count_time += arr[i] - current;
			current = arr[i];
		}
	}
	cout<<count_time<<endl;
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