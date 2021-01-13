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
	int n;
	cin >> n;
	int arr[n];int count = 0;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i] % 2 != 0){
			cout<<0<<endl;
			return;
		}
	}
	sort(arr,arr+n);
	while(true){
		bool flag = true;
		for(int i = 0; i < n; ++i){
			if( arr[i] % 2 != 0){
				flag = false;
				break;
			}
			else{
				arr[i] /= 2;
			}
		}
		if(!flag)
			break;
		count++;
		
	}
	cout<<count<<endl;


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