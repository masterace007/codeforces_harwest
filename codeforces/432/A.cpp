#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve() {
	int n , k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n ; ++i){
		cin >> arr[i];
		arr[i] += k;
	}

	int count_team  =0;
	int count_member = 0;
	for(int i = 0; i < n ; ++i){
		if(arr[i] <= 5)
			count_member++;
	}
	count_team = floor(double(count_member)/3);
	cout<<count_team<<endl;


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