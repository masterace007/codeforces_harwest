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
	int n;
	cin >> n;
	int arr[n];
	map<int,int> arr_map;
	int sum = 0;
	for(int i = 0 ; i < n; ++i){
		cin >> arr[i];
		arr[i] /= 100;
		if(arr_map.find(arr[i]) == arr_map.end())
			arr_map.insert(make_pair(arr[i],1));
		else
			arr_map[arr[i]]++;
		sum += arr[i];
	}
	if(sum % 2 == 0){
		if(arr_map.count(2) && arr_map.count(1))
			cout<<"YES"<<endl;
		else{
			if(!arr_map.count(1) && arr_map[2] % 2 == 0)
				cout<<"YES"<<endl;
			else{
				if(arr_map.count(1) && arr_map[1] % 2 == 0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}

	}
	else
		cout<<"NO"<<endl;
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