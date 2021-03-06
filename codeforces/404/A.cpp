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
	char ch[n][n];
	set<char> arr;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> ch[i][j];
			arr.insert(ch[i][j]);
		}
	}
	if(arr.size() != 2){
		cout<<"NO"<<endl;
		return;
	}
	arr.clear();
	
	for(int i = 0; i < n; i++)
		arr.insert(ch[i][i]);
	if(arr.size() != 1){
		cout<<"NO"<<endl;
		return;
	}
	for(int i = 0; i < n; ++i)
		arr.insert(ch[i][n-i-1]);
	if(arr.size() != 1){
		cout<<"NO"<<endl;
		return;
	}
	auto it = arr.begin();
	char ch_num = *it;
	arr.clear();
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(j != i && (j != n-i-1))
				arr.insert(ch[i][j]);
		}
	}
	it = arr.begin();
	char ch_num_2 = *it;
	if(arr.size() != 1)
		cout<<"NO";
	else if(ch_num_2 == ch_num)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
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