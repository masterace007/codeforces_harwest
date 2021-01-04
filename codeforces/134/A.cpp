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
	vector<int> record;
	int sum = 0;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		sum += arr[i];
	}

	int temp_sum = 0;
	for(int i = 0; i < n; ++i){
		temp_sum = sum;
		temp_sum -= arr[i];
		if(temp_sum % (n-1) == 0){
			if(temp_sum/(n-1) == arr[i]){
				record.push_back(i+1);
			}
		}
	}
	int size = record.size();
	if(size == 0)
		cout<<0<<endl;
	else{
	    cout<<record.size()<<endl;
		sort(record.begin(),record.end());
		for(int i = 0; i < record.size() ; ++i)
			cout<<record[i]<<" ";
		cout<<endl;
	}

	return;


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