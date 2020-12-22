#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	int n,k;
	cin>>n>>k;
	int arr[n+1][n+1];
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j)
			cin>>arr[i][j];
	}
	vector <int> arr_cost;
	for(int i = 2; i <=n ; ++i){
		arr_cost.push_back(i);
	}
	int ans = 0;
	do{
		int curr = 1;
		int cost = 0;
		for(int x : arr_cost){
			cost += arr[curr][x];
			curr = x;
		}
		cost += arr[arr_cost.back()][1];
		
		if(cost == k)
			ans++;
	
	}while(next_permutation(all(arr_cost)));
	
	cout<<ans<<endl;
	
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}