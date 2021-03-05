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
	int n,q;
	cin >> n >> q;
	vector<int> arr(n);
	vector<int> temp;
	int count = 0;
	for(auto &i: arr){
		cin >> i;
		if(i == 1)
			count++;
	}

	for(int i = 0; i < q; ++i){
		int type;
		cin >> type;
		if(type  == 1){
			int x;
			cin >> x;
			arr[x-1] = 1 - arr[x-1];
			if(arr[x-1] == 1)
				count++;
			else
				count--;

		}
		else{
			int k;
			cin >> k;
			if(k <= count)
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}
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