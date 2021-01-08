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
	int n;
	cin >> n;
	vector < pair<int,int> > arr;
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		arr.push_back(make_pair(a,b));
	}
	stable_sort(all(arr));
	bool flag = false;
	for(int i = 0; i < n-1; ++i){
		if(arr[i].second > arr[i+1].second){
			flag = true;
			break;
		}
	}
	if(flag)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl;
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