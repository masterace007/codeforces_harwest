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
	int r,g,b;
	cin >> r >> g >> b;
	int max_lamps = max(r,max(g,b));
	if( max_lamps == r){
		if(max_lamps - (b+g) <= 1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else if(max_lamps == g){
		if(max_lamps - (b+r) <= 1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else{
		if(max_lamps - (r+g) <= 1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

	
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