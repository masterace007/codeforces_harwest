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
	int count_even = 0, count_odd = 0;
	for(int &i : arr){
		cin >> i;
		if(i % 2 == 0)
			count_even++;
		else
			count_odd++;
	}
	if(count_odd == count_even || count_even == count_odd + 1 || count_odd == count_even + 1)
		cout<<0<<endl;
	else{
		sort(all(arr),greater<>());
		vector<int> odd;
		vector<int> even;
		for(int &i : arr){
			if(i % 2 == 0)
				even.emplace_back(i);
			else
				odd.emplace_back(i);
		}
		int sum = 0;
		if(count_even < count_odd){
			for(int i = count_even + 1; i < odd.size(); ++i)
				sum += odd[i];
		}
		else{
			for(int i = count_odd + 1; i < even.size(); ++i)
				sum += even[i];
		}
		cout<<sum<<endl;
		
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