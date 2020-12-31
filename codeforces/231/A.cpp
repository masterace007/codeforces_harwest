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
	int n;
	cin >> n;
	int arr[2] = {0};
	int count_question = 0;
	for(int i = 0; i < n ; ++i){
		int x,y,z;
		cin >> x >> y >>z;
		arr[x]++;
		arr[y]++;
		arr[z]++;
		if(arr[1] >= 2)
			count_question++;
		arr[1] = 0;
	}
	cout<<count_question<<endl;

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