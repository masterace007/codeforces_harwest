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
	 int arr_exercise[3] = {0};
	 for(int i = 1; i <= n ; ++i)
	 	cin >> arr[i];
	 for(int i = 1; i <= n ; ++i){
	     int num = i % 3;
	     arr_exercise[num] += arr[i];
	}

	//arr[0] = back , arr[1] = chest , arr[2] = biceps;

	if(arr_exercise[1] > arr_exercise[2] && arr_exercise[1] > arr_exercise[0])
		cout<<"chest"<<endl;
	else if(arr_exercise[2] > arr_exercise[0])
		cout<<"biceps"<<endl;
	else
		cout<<"back"<<endl;

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