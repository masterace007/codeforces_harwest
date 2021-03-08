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
	int n,k;
	cin >> n >> k;
	vector<int> arr;
	for(int i = 0; i < n; ++i){
		int a;
		cin >> a;
		arr.push_back(a);
	}

	map<int,int> arr_map;
	for(auto i = arr.begin(); i < arr.end(); ++i)
		arr_map[*i]++;
		
	arr.clear();
	for(auto &x: arr_map)
		arr.push_back(x.second);

	sort(all(arr),greater<>());
	int capacity = ceil((double)n/2.f);
	int count = 0;
	for(auto &x : arr){
		if(capacity > 0){
			int temp = x / 2;
			count += (temp*2);
			x -= (temp*2);
			capacity -= temp; 
		}
		else
			break;
	}
	sort(all(arr),greater<>());
	if(capacity > 0){
		for(auto &x : arr){
			if(capacity > 0){
				count += x;
				capacity -= x;
			}
			else
				break;
		}
	}
	cout<<count<<endl;

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