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
	int n,l,a;
	cin >> n >> l >> a;
	vector<pair<int,int>> arr;
	for(int i = 0; i < n; ++i){
		int b,c;
		cin >> b >> c;
		arr.push_back(make_pair(b,c));
	}
	sort(all(arr));
	int count_break = 0,temp = 0;
	int temp_a = 0;
	if(n > 0){
		count_break = arr[0].first/a;
		temp = arr[0].first + arr[0].second;
	}

	for(int i = 1; i < n; ++i){
		if(arr[i].first - temp >= a){
			int num = (arr[i].first - temp)/a;
			count_break += num;
		}
		temp = arr[i].first + arr[i].second;
	}

	count_break += (l - temp)/a;
	cout<<count_break<<endl;

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