#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	map<char,int> arr;
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); ++i){
		if(arr.find(str[i]) == arr.end() && isalpha(str[i]))
			arr.insert(make_pair(str[i],1));
		else
			arr[str[i]]++;
	}
	for(auto x : arr){
		if(x.second % 2 != 0){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}

int32_t main() {
	FASTIO; 
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