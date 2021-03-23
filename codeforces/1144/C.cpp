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
	for(auto i: arr)
		mp[i]++;
	for(auto x : mp){
		if(x.second >= 3){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	vector<int> num_1,num_2;
	for(auto x: mp){
		if(x.second == 2){
			num_1.pb(x.first);
			num_2.pb(x.first);
		}
		else
			num_1.pb(x.first);
	}
	sort(all(num_1));
	sort(all(num_2),greater<>());

	cout<<num_1.size()<<endl;
	for(auto x : num_1)
		cout<<x<<" ";
	cout<<endl;
	cout<<num_2.size()<<endl;
	for(auto x : num_2)
		cout<<x<<" ";
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