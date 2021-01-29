#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	set<int> arr;
	for(int i = 1; i < 10; ++i)
		arr.insert(i);

	if( n > 45)
		cout<<-1<<endl;
	else{
		string str = to_string(n);
		if(str.length() == 1){
			cout<<n<<endl;
			return;
		}
		str = "";
		string temp_new;
		int temp = 9;
		while(n > 0){
			if(temp > n){
				--temp;
				continue;
			}
			if(n >= temp){
				temp_new += to_string(temp);
				n -= temp;
				--temp;
			}
		}
		
		sort(all(temp_new));
		cout<<temp_new<<endl;
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