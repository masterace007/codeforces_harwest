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
	map <int,int> arr;
	for(int i = 0; i < n; ++i){
		int a;
		cin >> a;
		if(arr.find(a) == arr.end()){
			arr.insert(make_pair(a,1));
		}
		else
			arr[a]++;
	}
	int weight  = 0;

	if(arr.find(1) != arr.end())
		weight += arr[1];
	if(arr.find(2) != arr.end())
		weight += (arr[2]*2);

	if(weight % 2 == 0){
		if(arr.find(2) != arr.end()){
			if(arr[2] % 2 == 1){
				if(arr.find(1) != arr.end())
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			else
				cout<<"YES"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
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