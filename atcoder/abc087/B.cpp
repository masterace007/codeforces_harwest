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
	int a,b,c,x;
	cin >> a >> b >> c >> x;
	set<tuple<int,int,int>> arr;

	if(x % 50 != 0){
		cout<<0<<endl;
		return;
	}
	int count_ways = 0;
	for(int i = 0; i <= a; ++i){
		for(int j = 0; j <= b; ++j){
			int num = x - 500*i - 100*j;
			if(num % 50  == 0){
				int temp = num / 50;
				if(temp <= c && num > -1)
					arr.insert(make_tuple(i,j,temp));
			}
		}
	}
	cout<<arr.size()<<endl;
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