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
	int n,k;
	cin >> n >> k;
	int no_children_with_more_candies = floor((double)k/2);
	int candies = floor((double)n/k);
	candies = candies*k;
	n -= (candies);

	if(n > no_children_with_more_candies){
		candies += no_children_with_more_candies;
	}
	else
		candies += n;
	cout<<candies<<endl;

}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}