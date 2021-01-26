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
	int k,a,b;
	cin >> a >> b >> k;

	int bo[k],girl[k],cntb[a+1] ={0} ,cntg[b+1] = {0};
	for(int i = 0; i < k; ++i)
		cin >> bo[i];
	for(int i = 0 ; i < k; ++i)
		cin >> girl[i];

	for(int i = 0; i < k; ++i)
		cntb[bo[i]]++;

	for(int i = 0; i < k; ++i)
		cntg[girl[i]]++;

	int count = 0;
	for(int i = 0; i < k ; ++i){
		count += k - (cntb[bo[i]] + cntg[girl[i]]) + 1;
	}
	cout<<count/2<<endl;
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
	cin >> t;
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