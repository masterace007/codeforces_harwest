#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n,greater<int>());
	int sum_new = 0;
	int coin_count = 0;
	for(int i = 0; i < n ; ++i){
		coin_count++;
		sum_new += arr[i];
		sum -= arr[i];
		if(sum < sum_new)
			break;
	}
	cout<<coin_count<<endl;
	
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}