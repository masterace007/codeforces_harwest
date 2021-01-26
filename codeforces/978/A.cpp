#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	set<int> arr_set;
	vector<int> arr(n);
	vector<int> ans;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	reverse(all(arr));
	for(int i = 0; i < n; ++i){
		if(!arr_set.count(arr[i])){
			ans.push_back(arr[i]);
			arr_set.insert(arr[i]);
		}
	}
	reverse(all(ans));
	cout<<arr_set.size()<<endl;
	for(int i = 0; i < ans.size(); ++i)
		cout<<ans[i]<<" ";
	cout<<endl;

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