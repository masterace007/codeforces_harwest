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
	int n,k1,k2;
	cin >> n >> k1 >> k2;
	int arr[k1],arr_second[k2];
	for(int i = 0; i < k1 ; ++i)
		cin >> arr[i];
	for(int i = 0; i < k2 ; ++i)
		cin >> arr_second[i];
	
	sort(arr,arr+k1,greater<int>());
	sort(arr_second,arr_second+k2,greater<int>());
	if(arr[0] > arr_second[0])
		cout<<"YES"<<endl;
	else
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