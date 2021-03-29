#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(auto &i: arr)
		cin >> i;

	map<int,int> mp;
	for(auto x : arr)
		mp[x]++;
	int count_2 = 0, count_1 = 0;

	if(mp.size() == 1){
		cout<<"YES"<<endl;
		return;
	}

	int record_first = 0,record_second;
	int max_among = *max_element(all(arr));
	for(int i = 0; i < n; ++i){
		if(max_among == arr[i]){
			record_second = i;
			break;
		}
	}
	
	for(int i = 0; i < record_second; ++i){
		if(arr[i] >= arr[i+1]){
			cout<<"NO"<<endl;
			return;
		}
	}
	while(arr[record_second] == arr[record_second+1])
		record_second++;

	for(int i = record_second; i < n-1; ++i){
		if(arr[i] <= arr[i+1]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

signed main() {
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
	auto start1 = high_resolution_clock::now();
	int t = 1;
	// cin >> t;
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