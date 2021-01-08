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
	int t;
	cin >> t;
	while(t--){
		int a,b;
		int cost_single,cost_both;
		cin >> a >> b;
		cin >> cost_single >> cost_both;
		if(a == 0 && b == 0)
			cout<<0<<endl;
		else{
			if(a == b){
				int cost_single_both = a*cost_single + b*cost_single;
				int cost_both_together = a*cost_both;
				int cost = min(cost_both_together,cost_single_both);
				cout<<cost<<endl;
			}
			else{
				int mx = max(a,b);
				int mn = min(a,b);
				int cost_single_both = mx*cost_single + mn*cost_single;
				//cout<<cost_single_both<<endl;
				int cost_temp = (mx - mn)*cost_single;
				//cout<<cost_temp<<endl;
				if(mn > 0){
					cost_temp += mn*cost_both;
				}
				//cout<<cost_temp<<endl;
				int cost = min(cost_single_both,cost_temp);
				cout<<cost<<endl;
			}
		}
	}
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