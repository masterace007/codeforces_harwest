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
	vector<int> arr(n);
	for(int &i : arr)
		cin >> i;
	set<int> arr_1,arr_2;
	sort(all(arr));
	for(int i = 0; i < n; ++i){
		if(!arr_1.count(arr[i]))
			arr_1.insert(arr[i]);
		else
			arr_2.insert(arr[i]);
	}
	int temp = 0;
	for(auto x : arr_1){
		if(x == temp)
			temp++;
		else
			break;
	}
	int temp_2 = 0;
	for(auto x: arr_2){
		if(x == temp_2)
			temp_2++;
		else
			break;
	}
	cout<<temp_2+temp<<endl;
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