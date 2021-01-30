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

void solve() {
	string str;
	cin >> str;
	map<char,int> arr;
	arr['N'] = 0;
	arr['S'] = 0;
	arr['E'] = 0;
	arr['W'] = 0;
	for(int i = 0; i < str.length(); ++i)
		++arr[str[i]];
	if(arr['E'] != 0){
		if(arr['W'] == 0){
			cout<<"No"<<endl;
			return;
		}
	}
	if(arr['W'] != 0){
		if(arr['E'] == 0){
			cout<<"No"<<endl;
			return;
		}
	}
	if(arr['S'] != 0){
		if(arr['N'] == 0){
			cout<<"No"<<endl;
			return;
		}
	}
	if(arr['N'] != 0){
		if(arr['S'] == 0){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
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