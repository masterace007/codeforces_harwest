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
	int left[n]={0},right[n]={0};
	for(int i = 0; i < n; ++i){
		cin >> left[i] >> right[i];
	}
	int count_left_1=0,count_left_0=0;
	for(int i  = 0; i < n; ++i)
		if(left[i] == 1)
			count_left_1++;
		else
			count_left_0++;
	int operation = min(count_left_1,count_left_0);
	int count_right_0 = 0,count_right_1 = 0;
	for(int i = 0; i < n; ++i)
		if(right[i] == 1)
			count_right_1++;
		else
			count_right_0++;
	int num = min(count_right_1,count_right_0);
	operation += num;
	cout<<operation<<endl;

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