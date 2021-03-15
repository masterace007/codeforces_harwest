#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;

void solve(){
	int n,a,b,p,q;
	cin >> n >> a >> b >> p >> q;
	int num_1 = (n - a) ;
	int num_2 = (n-b);
	
	if(num_1 < 0 && num_2 < 0){
		cout<<0<<endl;
		return;
	}
	if(num_1 >= 0)
		num_1 /= a,num_1++;
	else
		num_1 = 0;
	if(num_2 >= 0)
		num_2 /= b,num_2++;
	else
		num_2 = 0;
	
	int num_both = 0;
	int lcm = (a*b)/__gcd(a,b);
	if(lcm <= n){
		num_both = (n - lcm)/lcm + 1;
	}
	int cost = 0;
	if(p < q){
		num_1 -= num_both;
		cost = num_1*p + num_2*q;
	}
	else{
		num_2 -= num_both;
		cost = num_1*p + num_2*q;
	}
	cout<<cost<<endl;

}

signed main() {
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
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