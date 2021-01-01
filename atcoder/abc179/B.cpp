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
	int count = 0;
	for(int i = 0; i < n; ++i){
		int x,y;
		cin >> x >> y;
		if(x == y)
			count++;
		else
			count = 0;
		if(count == 3){
			cout<<"Yes";
			return;
		}
	}
	cout<<"No"<<endl;
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