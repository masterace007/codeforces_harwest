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
	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i] == 1)
			count_1++;
		else if(arr[i] == 2)
			count_2++;
		else
			count_3++;
	}
	int teams = min(count_1,min(count_2,count_3));
	cout<<teams<<endl;
	while(teams){
		int num = 1;
		while(num < 4){
			for(int i = 0 ; i < n ; ++i){
				if(arr[i] == num){
					cout<<i+1<<" ";
					arr[i] = -1;
					break;
				}
			}
			num++;
		}
		cout<<endl;
		teams--;
	}
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