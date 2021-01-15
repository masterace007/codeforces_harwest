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
	int n,m;
	cin >> n >> m;
	int k = 0;
	for(int i = 0; i < n ; ++i){
		if(i % 2 ==0){
			for(int j = 0; j < m ; ++j)
				cout<<"#";
		}
		else{
			if(k == 0){
				for(int j = 0; j < m -1 ; ++j)
					cout<<".";
				cout<<"#";
				k = 1;
			}
			else if(k == 1){
				cout<<"#";
				for(int j = 0; j < m - 1 ; ++j)
					cout<<".";
				k = 0;
			}
		}

		cout<<endl;
	}

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