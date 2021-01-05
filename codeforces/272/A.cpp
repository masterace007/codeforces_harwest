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
	vector <int> arr(n,0);
	int divisor = n+1;
	int sum = 0;
	for(int i = 0; i < n ; ++i){
		cin >> arr[i];
		sum += arr[i];
	}
	int end = sum + 6;
	int count_way = 0;
	for(int i = sum+1 ; i < end; ++i){
		//cout<<i-1<<endl;
		if((i-1) % divisor == 0)
			continue;
		else{
			count_way++;
		}
	}
	cout<<count_way<<endl;
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
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