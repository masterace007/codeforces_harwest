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
	set<int> num;
	for(int i = 1; i*i <= n; ++i){
		if(n % i  == 0){
		    int q = n/i;num.insert(q);
		    num.insert(i);
		}
	}
	for(auto x : num)
	cout<<x<<endl;
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