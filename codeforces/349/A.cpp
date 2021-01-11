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
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	int money[101] = {0};
	
	for(int i = 0; i < n; ++i){
		if(arr[i] == 25)
			money[25]++;
		else if(arr[i] == 50){
			money[50]++;
			if(money[25] > 0)
				money[25]--;
			else{
				cout<<"NO"<<endl;
				return;
			}
		}else{
			money[100]++;
			if(money[50] > 0 && money[25] > 0){
				money[50]--;
				money[25]--;
			}else if(money[25] >= 3)
			money[25] -= 3;
			else{
				cout<<"NO"<<endl;
				return;
			}
		}
	}	
	cout<<"YES"<<endl;
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