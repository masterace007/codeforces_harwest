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
	int n;
	cin >> n;
	vector<int> arr(2*n,0);
	for(int i = 0; i < 2*n ; ++i)
		cin >> arr[i];

	int max_arr = *max_element(arr.begin(),arr.end());
	int min_arr = *min_element(arr.begin(),arr.end());
	if(max_arr == min_arr)
		cout<<"-1"<<endl;
	else{
		sort(arr.begin(),arr.end());
		for(int i = 0; i < arr.size(); ++i)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	
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