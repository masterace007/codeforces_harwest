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
using namespace chrono;

void solve() {
	map<int,int> arr_map;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; ++i){
		cin >> arr[i];
		if(arr_map.find(arr[i]) == arr_map.end())
			arr_map.insert(make_pair(arr[i],1));
		else
			arr_map[arr[i]]++;
	}
	vector<pair<int,int>> record_value_grigory;
	int count_andrew = 0,count_grigory = 0;
	bool flag = true,check = false;
	for(auto [x,y] : arr_map){
		if(flag){
			record_value_grigory.emplace_back(make_pair(x,1));
			check = true;
			flag = false;
			count_grigory = x;
			y -= 1;
		}
		if(check && y){
			count_andrew += (x*y);
		}
	}
	if(count_grigory != count_andrew && count_andrew >= 1){
		cout<<1<<endl;
		int num = record_value_grigory[0].first;
		for(int i = 0; i < n; ++i){
			if(num == arr[i]){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	else
		cout<<-1<<endl;
}

int32_t main() {
	FASTIO;
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif 
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