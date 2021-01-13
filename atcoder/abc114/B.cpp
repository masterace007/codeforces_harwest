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
	string str;
	cin >> str;
	int min_among = INT_MAX;
	if(str.find("753") != string::npos){
		cout<<0<<endl;
		return;
	}
	else{
		for(int i = 0 ; i < str.length()-2; i++){
			string str_temp = str.substr(i,3);
			int num = stoi(str_temp);
			int diff = abs(753 - num);
			min_among = min(min_among,diff);
		}
	}
	cout<<min_among<<endl;
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