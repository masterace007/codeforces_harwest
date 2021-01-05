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
	int n,k;
	cin >> n >> k;
	vector<int> arr;
	for(int i = 0; i < n ; ++i){
		int a; cin >> a;
		arr.push_back(a);
	}
	
	
	k--;
	int count = 0;
	if(*min_element(all(arr)) == *max_element(all(arr))){
		cout<<count<<endl;
		return;

	}
	int index = 0;
	for(int i = n-1; i >= 0 ; --i){
		if(arr[n-1] != arr[i]){
			index= i+1;
			break;
		}
	}
	if(k < index )
	    cout<<-1<<endl;
	else
	    cout<<index<<endl;

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