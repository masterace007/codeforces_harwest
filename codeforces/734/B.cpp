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
	int k2,k3,k5,k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int count_256 = min(k2,min(k5,k6));
	k2 -= count_256;
	k5 -= count_256;
	k6 -= count_256;
	int sum = count_256*256;
	int count_32 = min(k2,k3);
	sum += (32*count_32);
	cout<<sum<<endl;

}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}