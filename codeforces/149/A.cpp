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
	int k;
	cin >> k;
	int arr[12];
	for(int i = 0; i < 12; ++i)
		cin >> arr[i];
	sort(arr,arr+12,greater<int>());
	int count = 0;
	int num_height = 0;
	for(int i = 0; i < 12; ++i){
		if(num_height < k){
			count++;
			num_height += arr[i];
		}
		else
			break;
	}
	if(num_height >= k)
		cout<<count<<endl;
	else
		cout<<-1<<endl;

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