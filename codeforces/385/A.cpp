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
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i =0; i < n ; ++i)
		cin >> arr[i];
	int max_selling_d = 0,max_selling_d_d = 0;
	int max_difference = INT_MIN;
	for(int i = 0; i < n - 1 ; ++i){
	    int num = (arr[i] - arr[i + 1]);
		if(max_difference < num && num > 0){
			max_difference = arr[i] - arr[i+1];
			max_selling_d = arr[i];
			max_selling_d_d = arr[i+1];
		}
	}
	int profit = max_selling_d - max_selling_d_d - k;
	if(profit < 0)
	profit = 0;
	
	cout<<profit<<endl;
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