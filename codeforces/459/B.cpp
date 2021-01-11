#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	vector<int> arr;
	int n;
	cin >> n;
	map<int,int> arr_map;
	for(int i = 0; i < n; ++i){
		int a;
		cin >> a;
		arr.push_back(a);
		if(arr_map.find(a) == arr_map.end())
			arr_map.insert(make_pair(a,1));
		else
			arr_map[a]++;
	}
	int count = 0;
	int max_diff = abs(*min_element(all(arr)) - *max_element(all(arr)));
	cout<<max_diff<<" ";
	//cout<<endl;
	sort(all(arr));
	set<int> arr_set;
	if(max_diff == 0)
		count = n*(n-1)/2;
	else
		count = arr_map[*min_element(all(arr))]*arr_map[*max_element(all(arr))];
	cout<<count<<endl;
}

int32_t main() {
	FASTIO; 
    auto start1 = high_resolution_clock::now();
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
	return 0;
}