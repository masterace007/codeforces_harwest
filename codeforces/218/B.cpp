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
	vector <int> arr(m,0);
	for(int i = 0; i < m; ++i)
		cin >> arr[i];

	sort(arr.begin(),arr.end());
	int count = 0,cost_min = 0;
	for(int i = 0; i < m; ++i){
		int k = arr[i];
		while(k > 0 && count < n){
			count++;
			cost_min += k;
			k--;
		}
		if(count == n)
			break;
	}
	
	int cost_max = 0;
	count = 0;
	int index_record = -1;
	int max_num;


	for(int i = 0; i < n ; ++i){
	    max_num = INT_MIN;
		for(int j = 0; j < m ; ++j){
			if(max_num < arr[j]){
				max_num = arr[j];
				index_record = j;
			}
		}
		
		count++;
		cost_max += max_num;
		arr[index_record]--;
	}

	cout<<cost_max<<" "<<cost_min<<endl;
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