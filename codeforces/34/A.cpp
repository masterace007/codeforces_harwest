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
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	int difference = INT_MAX;
	int index = 0,index_neighbour = 0;
	for(int i = 1; i < n; ++i){
		int diff = abs(arr[i] - arr[i-1]);
		if(diff < difference){
			difference = diff;
			index = i-1;
			index_neighbour = i;
		}
	}
	int last_first = abs(arr[0] - arr[n-1]);
	if(difference > last_first){
		difference = last_first;
		cout<<n<<" "<<1<<endl;
	}
	else{
		cout<<index+1<<" "<<index_neighbour+1<<endl;
	}
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