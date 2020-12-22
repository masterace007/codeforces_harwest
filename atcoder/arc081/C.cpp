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
	map<int,int> area;
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i = 0; i < n; ++i)
		cin>>arr[i];
		
	for(int i =0; i < n; ++i){
		if(area.find(arr[i]) == area.end()){
			area.insert(make_pair(arr[i],1));
		}
		else
			area[arr[i]]++;
	}
	stable_sort(all(arr));
	reverse(all(arr));
	int max_area = 0;
	for(int i = 0; i < arr.size(); ++i){
		if(area[arr[i]] >= 2 ){
			area[arr[i]] -= 2;
			for(int j = i+1; j < arr.size(); ++j){
				if(area[arr[j]] >= 2){
					max_area = arr[i] * arr[j];
					cout<<max_area<<endl;
					return;
				}
			}
			area[area[i]] +=2;
		}
	}
	cout<<0<<endl;
	
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
//	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}