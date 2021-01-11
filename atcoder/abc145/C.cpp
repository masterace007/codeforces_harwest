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
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	vector<pair<int,int>> arr;
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		arr.push_back(make_pair(a,b));
	}
	sort(arr.begin(),arr.end());
	
	double_t sum = 0;
	int paths = 0;
	do{
		paths++;
		double_t num = 0;
		
		for(int i = 1; i < arr.size(); ++i){
			double_t y = pow((arr[i].second - arr[i-1].second),2);
			double_t x = pow((arr[i].first - arr[i-1].first),2);
			num += sqrt(y+x); 
		}
		sum +=num;

	}while(next_permutation(all(arr)));
	sum = sum/paths;
	cout<<fixed<<setprecision(12)<<sum<<endl;



}

int32_t main() {
	FASTIO;
    auto start1 = high_resolution_clock::now();
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
	return 0;
}