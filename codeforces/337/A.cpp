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

	sort(arr,arr+m);
	int min_difference = INT_MAX;
	for(int i = 0 ; i < m - n + 1 ; ++i){
		if(min_difference > abs(arr[i] - arr[i+n-1]) ){
			min_difference = abs(arr[i] - arr[i+n-1]);
		}
	}
	cout<<min_difference<<endl;
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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