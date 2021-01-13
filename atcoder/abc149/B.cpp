#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	int64_t a,b,c;
	cin >> a >> b >> c;
	if( a <= c){
		c -= a;
		a = 0;
	}
	else{
		a -= c;
		c = 0;
		cout<<a<<" "<<b<<endl;
		return;
	}

	if( b <= c){
		c -= b;
		b = 0;
	}
	else{
		b -= c;
		c = 0;
		cout<<a<<" "<<b<<endl;
		return;
	}
	cout<<a<<" "<<b<<endl;
}


int32_t main() {
	FASTIO;
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