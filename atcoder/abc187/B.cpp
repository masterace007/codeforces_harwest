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
	vector<pair<int,int>> arr;
	for(int i = 0 ; i < n ; ++i){
		int a,b;
		cin >> a >> b;
		pair <int,int> p;
		p.first = a;
		p.second = b;
		arr.push_back(p);
	}

	for(int i = 0; i < n ; ++i){
		for(int j = i+1; j < n; ++j){
			int num = abs(arr[i].second - arr[j].second);
			//cout<<abs(arr[i].second)<<" "<<abs(arr[j].second)<<endl;
			int den = abs(arr[i].first  - arr[j].first);
			if(num <= den && den != 0){
			    //cout<<"----here"<<endl;
			    count++;
			}
		}
	}

	cout<<count<<endl;
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