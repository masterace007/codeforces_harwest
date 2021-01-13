#include "bits/stdc++.h"
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

bool check_sqrt(int num){
	double_t check_1 = 0.00;
	int check_2 = 0;
	check_1 = sqrt(num);
	check_2 = sqrt(num);
	if(check_1 == check_2)
		return true;
	return false;
}

void solve() {
	string a,b;
	cin >> a >> b;
	string str = a+b;
	int num = stoi(str);
	if(check_sqrt(num))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
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