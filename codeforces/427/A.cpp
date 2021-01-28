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
	int arr[n];
	bool flag = true;
	int record = -1,count_crime = 0;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i] >= 1 && flag){
			record = i;
			flag = false;
		}
		else if(flag)
			++count_crime;
	}
	int officers = 0;
	if(record == -1){
		cout<<n<<endl;
		return;
	}
	
	for(int i = record; i < n; ++i){
		if(arr[i] > 0)
			officers += arr[i];
		else{
			if(officers + arr[i] < 0)
				++count_crime;
			else
				officers += arr[i];
		}
	}
	cout<<count_crime<<endl;
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