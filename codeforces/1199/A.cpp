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
	int n,a,b;
	cin >> n >> a >> b;
	vector<int> arr(n);
	int record;
	for(auto &i: arr)
		cin >> i;
	for(int i = 0; i < n; ++i){
		int temp_min_first = INT_MAX;
		for(int k = min(i,abs(i-a)); k <= i; ++k){
			if(arr[k] < temp_min_first){
				temp_min_first = arr[k];
				record = k;
			}
		}
		int temp_min_second = INT_MAX;
		for(int k = i; k < min(n,b + i+1); ++k){
			if(arr[k] < temp_min_second){
				temp_min_second = arr[k];
			}
		}
		if(temp_min_second == temp_min_first){
			cout<<record+1<<endl;
			return;
		}
	}
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