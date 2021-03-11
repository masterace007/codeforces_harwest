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
	int n,k1,k2,a1,a2;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	int min_send_off = a1*(k1-1) + a2*(k2-1);
	cout<<max(0LL,n - min_send_off)<<" ";
	if(k1 < k2){
		int num = n/k1;
		int count;
		count = min(num,a1);
		// a1 -= count;
		n -= (count*k1);
		num = n/k2;
		count += min(num,a2);
		cout<<count<<endl;
	}
	else{
		int num = n/k2;
		int count;
		count = min(num,a2);
		// a2 -= count;
		n -= (count*k2);
		num = n/k1;
		count += min(num,a1);
		cout<<count<<endl;
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