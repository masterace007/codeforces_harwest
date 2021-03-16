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
	int n;
	cin >> n;
	vector<pair<int,int>> station;
	vector<int> wait,travel,extra;
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		station.pb(make_pair(a,b));
		int wait_time = ceil((double)(b - a)/2.f);
		wait.pb(wait_time);
	}
	for(int i = 0; i < n; ++i){
		int extra_time;
		cin >> extra_time;
		extra.pb(extra_time);
	}

	for(int i = 1; i < n; ++i){
		int dist = station[i].first - station[i-1].second;
		travel.pb(dist);
	}
	if(n == 1){
		cout<<station[0].first + extra[0]<<endl;
		return;
	}
	station[0].first += extra[0];
	int temp = station[0].first + wait[0];
	station[0].second = (station[0].second > temp) ? station[0].second : temp;

	for(int i = 1; i < n-1; ++i){
		int num = station[i-1].second + travel[i-1] + extra[i];
		station[i].first = num;
		temp = station[i].first + wait[i];
		station[i].second = (station[i].second > temp) ? station[0].second : temp;
	}
	
	station[n-1].first = station[n-2].second + travel[n-2]+extra[n-1];
	cout<<station[n-1].first<<endl;
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