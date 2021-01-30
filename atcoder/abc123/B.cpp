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
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;

	vector<int> arr = {a,b,c,d,e};
	sort(arr.begin(),arr.end());
	int time = INT_MAX;
	int time_temp = 0;
	

	do{
		time_temp = 0;
		bool flag = false;

		for(int i = 0; i < arr.size(); ++i){
			time_temp += arr[i];
			if(i == arr.size()-1)
				continue;
			if(time_temp % 10 != 0){
				int rem = time_temp % 10;
				time_temp += (10-rem);
			}

		}
		
		time = min(time,time_temp);
		time_temp = 0;

	}while(next_permutation(all(arr)));
	cout<<time<<endl;

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