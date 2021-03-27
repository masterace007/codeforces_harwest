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
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	x--,y--;
	char ch[n][m];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j)
			cin >> ch[i][j];
	}

	int count = 1;
	for(int j = y+1; j < m; ++j){
		if(ch[x][j] == '#')
			break;
		count++;
	}
	for(int j = y-1; j > -1; --j){
		if(ch[x][j] == '#')
			break;
		count++;
	}

	for(int i = x+1; i < n; ++i){
		if(ch[i][y] == '#')
			break;
		count++;
	}
	for(int i = x-1; i > -1; --i){
		if(ch[i][y] == '#')
			break;
		count++;
	}

	cout<<count<<endl;

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