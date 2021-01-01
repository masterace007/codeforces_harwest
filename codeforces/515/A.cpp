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
	int a,b,n;
	cin >> a >> b >> n;
	int minimum_distance = abs(a) + abs(b);
	int difference = 0;
	if(minimum_distance <= n)
		difference  = abs(minimum_distance - n);
	if(n < minimum_distance )
		cout<<"No"<<endl;
	else{
		if(difference % 2 == 0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	
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