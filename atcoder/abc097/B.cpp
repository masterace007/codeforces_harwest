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

const int N = 1e6 + 1;
int arr[N] = {0};
int k = 0;

void solve() {
	int n;
	cin >> n;
	int record = 0;
	for(int i = 0; i < k; ++i){
		if(arr[i] > n)
			continue;
		else{
			cout<<arr[i]<<endl;
			return;
		}
	}
	cout<<n<<endl;
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
	for(int i = 2; i < 33; ++i){
		for(int j = 2; j < 10; ++j){
			int num = pow(i,j);
			if(num <= 1000)
				arr[k++] = num;
		}
	}
	sort(arr,arr+N,greater<>());

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