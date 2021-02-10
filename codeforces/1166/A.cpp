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
	char arr[n];
	for(int i = 0; i < n; ++i){
		string str;
		cin >> str;
		arr[i] = str[0];
	}
	map<char,int> arr_map;
	for(auto x : arr){
		if(arr_map.find(x) == arr_map.end())
			arr_map.insert(make_pair(x,1));
		else
			arr_map[x]++;
	}
	int sum = 0;
	for(auto x : arr_map){
		int num = x.second;
		int rem_1 = ceil((double)num/2.f);
		num -= rem_1;
		int temp = rem_1*(rem_1-1)/2;
		int temp_2 = num*(num-1)/2;
		sum += (temp_2+temp);
	}
	cout<<sum<<endl;
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