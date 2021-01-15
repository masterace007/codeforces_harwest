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
	int n , m;
	cin >> n >> m;
	int k = 0;
	while(true){
		if(k == 0){
			if(n && m){
				n -= 1;
				m -= 1;
				k = 1;
			}
			else{
				cout<<"Malvika"<<endl;
				break;
			}
		}
		else if(k == 1){
			if(n && m){
				n -= 1;
				m -= 1;
				k = 0;
			}
			else{
				cout<<"Akshat"<<endl;
				break;
			}
		}

	}
	
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