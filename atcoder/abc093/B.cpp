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
	int a,b,range;
	cin >> a >> b >> range;
	set<int> arr;
	int temp = a;
	int check = 0;
	int temp_range = a+range-1;
	if(temp_range > b)
		temp_range = b;
	for(int i = a; i <= temp_range ; ++i)
		arr.insert(i);
	temp_range = b - range + 1;
	if(temp_range < a)
		temp_range = a;
	for(int i = b; i >= temp_range; --i)
		arr.insert(i);
	for(auto x : arr)
		cout<<x<<endl;
	

}


int32_t main() {
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