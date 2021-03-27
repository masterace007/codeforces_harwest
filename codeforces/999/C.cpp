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
	string str;
	cin >> str;

	map<char,int> mp;
	for(char i: str)
		mp[i]++;
	for(auto &x : mp){
		if(x.second <= k){
			k -= x.second;
			x.second = 0;
		}
		else if(x.second > k){
			x.second -= k;
			k = 0;
			break;
		}
	}
	
	string temp = str;
	reverse(all(temp));

	string temp_temp;
	for(char i : temp){
		if(mp[i] != 0){
			temp_temp += i;
			mp[i]--;
		}
	}
	reverse(all(temp_temp));
	cout<<temp_temp<<endl;
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