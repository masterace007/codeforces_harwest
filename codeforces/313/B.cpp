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
	string str;
	cin >> str;
	int n = str.length();
	int m;
	cin >> m;
	vector<int> arr(n-1,0);
	int count = 0;
	for(int i = 0; i < n-1; ++i){
		if(str[i] == str[i+1])
			count++;
		arr[i] = count;
	}
	vector<int> f(str.length() + 1, 0);
    for (int i = 0; i < str.length(); i++){
        f[i + 1] = f[i] + (str[i] == str[i + 1]);
    }

	for(int i = 0; i < m; ++i){
		int a,b;
		cin >> a >> b;
		a--,b--;
		cout<<f[b] - f[a]<<endl;
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