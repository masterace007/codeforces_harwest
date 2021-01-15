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
	int x,y;
	cin >> x;
	int arr_x[x];
	for(int i = 0; i < x ; ++i)
		cin >> arr_x[i];
	cin >> y;
	int arr_y[y];
	for(int i = 0 ; i < y ; ++i)
		cin >> arr_y[i];
	sort(arr_x,arr_x+x);
	sort(arr_y,arr_y+y);

	bool flag  = false,check  = true;
	for(int i = 1; i <= n ; ++i){
		flag  = false;
		for(int k = 0 ; k < x ; ++k){
			if(i == arr_x[k]){
				flag = true;
				break;
			}
		}
		if(!flag)
		for(int k = 0; k < y ; ++k ){
			if(i == arr_y[k]){
				flag = true;
				break;
			}
		}

		if(!flag){
			cout<<"Oh, my keyboard!"<<endl;
			check = false;
			break;
		}
	}
	if(check){
		cout<<"I become the guy."<<endl;
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