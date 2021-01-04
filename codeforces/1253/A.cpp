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
	int arr_1[n];
	int arr_2[n];
	for(int i = 0; i < n; ++i)
		cin >> arr_1[i];
	for(int i = 0; i < n; ++i)
		cin >> arr_2[i];

	int difference_index = 0;
	int difference_amount = 0;

	for(int i = 0; i < n; ++i){
		if(arr_1[i] - arr_2[i] != 0){
			difference_index = i;
			difference_amount = arr_2[i] - arr_1[i];
			if(difference_amount < 0){
				cout<<"NO"<<endl;
				return;
			}
			break;
		}
	}

	if(!difference_amount){
		cout<<"YES"<<endl;
		return;
	}

	int last = n;
	for(int j = difference_index + 1; j < n ; ++j){
		if(arr_2[j] - arr_1[j] == 0){
			last  = j;
			break;
		}
	}
	for(int i = difference_index; i <last ; ++i)
		arr_1[i] += difference_amount;


	for(int i = 0; i < n; ++i){
		if( arr_1[i]- arr_2[i] !=0){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;

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