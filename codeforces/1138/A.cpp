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
	int min_len = INT_MIN,count = 1;
	vector<int> ans;
	for(int i = 1; i < n; ++i){
		if(arr[i] == arr[i-1])
			count++;
		else{
			ans.pb(count);
			count = 1;
		}
	}
	ans.pb(count);
	int max_len = INT_MIN;
	for(int i = 0; i < ans.size()-1; i++){
		min_len = min(ans[i], ans[i+1]);
		max_len = max(max_len,min_len);
	}
	cout<<2*max_len<<endl;
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