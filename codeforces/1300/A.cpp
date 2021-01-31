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


void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	int sum = 0;
	
	int check[2] = {0};
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		sum += arr[i];
		if(arr[i] == 0){
			check[0]++;
		}
		else if(arr[i] == -1)
			check[1]++;
	}
	

	if(check[0] == 0 && sum != 0)
		cout<<0<<endl;
	else{
		int operation = 0;
		if(check[0] != 0){
			operation += check[0];
			sum += operation;
			if(sum == 0)
				cout<<operation+1<<endl;
			else
				cout<<operation<<endl;
		}
		else
			cout<<1<<endl;
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