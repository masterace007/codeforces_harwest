#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;
const int N = 1e18;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	bool flag = false;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i] == 0)
			flag = true;
	}
	int prod = 1;
	if(flag == true){
		cout<<0<<endl;
		return;
	}
	for(int i = 0; i < n; ++i){
		if(prod > N/arr[i]){
			cout<<-1<<endl;
			return;
		}
		prod *= arr[i];
	}
	if(prod > N || prod <= 0){
		cout<<-1<<endl;
		return;
	}
	cout<<prod<<endl;
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