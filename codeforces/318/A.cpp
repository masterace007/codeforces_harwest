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
	int range_of_odd = ceil((double)n / 2);
	int range_of_even = n - range_of_odd;
	int num = 0;
	//cout<<range_of_odd<<endl;
	if(k <= range_of_odd){
		num = 2*k - 1;				
	}
	else{
		k = k - range_of_odd;
		num = 2 * k;

	}
	cout<<num<<endl;
	
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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