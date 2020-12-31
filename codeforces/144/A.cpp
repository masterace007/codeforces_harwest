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
	int arr_new[n];
	for(int i = 0 ; i < n ; ++i){
		cin >> arr[i];
		arr_new[i] = arr[i];
	}
	sort(arr_new,arr_new+n,greater<int>());
	int count_swap = 0;
	
	int record_min = 0;
	for(int i = n - 1; i >= 0 ; --i){
		if(arr_new[n-1] == arr[i]){
			record_min = i;
			break;
		}
	}
	for(int i = record_min; i < n -1; ++i){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
		count_swap++;
	}

	int record_max  =0;
	for(int i = 0; i < n; ++i){
		if(arr_new[0] == arr[i]){
			record_max = i;
			break;
		}
	}

	for(int i = record_max; i>=1 ; --i){
		int temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;
		count_swap++;
	}
	cout<<count_swap<<endl;



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