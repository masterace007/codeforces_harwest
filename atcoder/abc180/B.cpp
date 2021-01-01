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
	int arr[n];
	double sum_square = 0;
	int max_num = INT_MIN;
	int sum = 0;
	for(int i = 0; i < n ; ++i){
		int a;
		cin >> a;
		a = abs(a);
		sum += a;
		if(max_num < a){
			max_num = a;
		}
		arr[i] = a;
		a *= a;
		sum_square += a;
	}
	sum_square = sqrt(sum_square);
	cout<<sum<<endl;
	cout<<setprecision(18)<<fixed<<sum_square<<endl;
	cout<<max_num<<endl;	
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}