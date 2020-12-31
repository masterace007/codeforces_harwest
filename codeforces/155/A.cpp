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
	int min_num = INT_MAX;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i] < min_num)
			min_num = arr[i];
	}
	int count_amazing = 0;
	for(int i = 1; i < n ; ++i){
		bool flag = true;
		for(int j = 0; j < i ; ++j)
			if(arr[j] >= arr[i]){
				flag = false;
				break;
			}
		if(flag){
			count_amazing++;
			continue;
		}
		else{
			bool check = true;
			for(int j = 0; j < i ; ++j){
				if(arr[i] >= arr[j]){
					check = false;
					break;
				}
			}
			if(check){
				count_amazing++;
			}
		}
	}
	cout<<count_amazing<<endl;


	
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