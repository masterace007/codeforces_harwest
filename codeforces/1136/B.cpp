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
	int n,k;
	cin >> n >> k;
	if(k == 1 || k == n){
		if(n == 2)
			cout<<6<<endl;
		else{
			int steps = n-1;
			steps += (n*2);
			steps++;
			cout<<steps<<endl;	
		}
		return;
	}
	int steps = 0;

	if((k - 1) > (n-k)){
		steps += (2*(n-k) + (n-k+1)*2 +1);
		steps += (2*(k-1) + (k - 1)); 
	}
	else if(n % 2 == 0 && k == n/2)
		steps += ((k*2 + 1 + (k-1)*2) + k*2 + k);
	else{
		steps += (2*k + (k-1)*2 + 1);
		steps += (2*(n - k) + (n - k));
	}
	cout<<steps<<endl;

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