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
	int n;
	cin >> n;
	if(n % 3 == 0){
		cout<<n/3<<" "<<0<<" "<<0<<endl;
		return;
	}
	else if(n % 5 == 0){
		cout<<0<<" "<<n/5<<" "<<0<<endl;
		return;
	}
	else if(n % 7 == 0){
		cout<<0<<" "<<0<<" "<<n/7<<endl;
		return;
	}
	else{
		for(int i = 0; i < 1000; ++i){
			for(int j = 0; j < 1000; ++j){
				int temp = (i*3 + j*5);
				if(n - temp < 0){
					continue;
				}
				int num = n - temp;
				if(num % 7 == 0){
					cout<<i<<" "<<j<<" "<<num/7<<endl;
					return;
				}
			}
		}
		cout<<-1<<endl;
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