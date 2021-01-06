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
	vector <int> candy(n,0);
	vector<int>orange(n,0);
	for(int i = 0; i < n; ++i){
		cin >> candy[i];
	}
	for(int i = 0; i < n; ++i){
		cin >> orange[i]; 
	}
	int min_candy = *min_element(all(candy));
	int min_orange = *min_element(all(orange));
	int count_operations = 0;
	

	for(int i = 0; i < n; ++i){
		if(candy[i] > min_candy && orange[i] > min_orange){
            int mx = min(candy[i] - min_candy,orange[i] - min_orange);
			candy[i] = candy[i] - mx;
			orange[i] = orange[i] - mx;
			count_operations += mx;
		}

		if(candy[i] > min_candy && orange[i] == min_orange){
			int temp_operation = candy[i] - min_candy;
			count_operations += temp_operation;
		}

		if(orange[i] > min_orange && candy[i] == min_candy){
			int temp_operation = orange[i] - min_orange;
			count_operations += temp_operation;
		}
	}
	
	cout<<count_operations<<endl;


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