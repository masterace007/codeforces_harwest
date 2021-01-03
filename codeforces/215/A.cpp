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
	cin >> n;
	int arr[n];
	for(int i = 0; i < n ; ++i)
		cin >> arr[i];
	cin >> m;
	int arr_new[m];
	int z = max(m,n);
	vector<int> arr_gear_ratio;
	for(int i = 0; i < m ; ++i)
		cin >> arr_new[i];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(arr_new[j] % arr[i] == 0){
				int num = arr_new[j] / arr[i];
				arr_gear_ratio.push_back(num);
			}
		}
	}
	
	
	
	sort(arr_gear_ratio.rbegin(),arr_gear_ratio.rend());

	int count = 0;
	int max_num = arr_gear_ratio[0];
	for(int i = 0; i < arr_gear_ratio.size(); ++i)
		if(max_num == arr_gear_ratio[i])
			count++;
		else
			break;
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