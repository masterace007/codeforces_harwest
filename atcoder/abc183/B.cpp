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
	int sx,sy,gx,gy;
	cin>>sx>>sy;
	cin>>gx>>gy;
	if(sx > gx){
	    swap(sx,gx);
	    swap(sy,gy);
	}
	
	double x = (gx*sy + sx*gy)/(double)(gy + sy);
	cout.precision(10);
	cout<<x<<endl;
}

int32_t main() {
	FASTIO;
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}