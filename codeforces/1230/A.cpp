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
	int a1,a2,a3,a4;
	cin >> a1 >> a2 >> a3 >> a4;
	int total = (a1 + a2 + a3 + a4);
	int sum = 0;
	if(total % 2 == 0)
		sum = total / 2;
	
	if(sum ==  (a1 + a2) || sum ==  (a1 + a3) || sum ==  (a1 + a4) || sum ==  (a2 + a3)
			|| sum ==  (a2 + a4) || sum == (a3 + a4))
		cout<<"YES"<<endl;
	else if(a1 + a2 + a3 == a4 || a4 + a2 + a3 == a1 || a4 + a1 + a3 == a2
								 || a4 + a1 + a2 == a3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


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