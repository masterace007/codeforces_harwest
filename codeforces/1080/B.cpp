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
	int q;
	cin >> q;
	for(int temp = 0; temp < q; ++temp){
		int l,r;
		cin >> l >> r;
		//arithematic sum
		if(l  == r){
			if(l % 2 == 0)
				cout<<l<<endl;
			else{
				l*= -1;
				cout<<l<<endl;
			}
			continue; 
		}

		if(l % 2 == 0 && r % 2 == 1){
			int n1 = ((r-1) - l)/2 + 1;
			int sum_1 = (n1)*(l + r-1)/2;

			int n2 = (r - (l+1))/2 + 1;
			int sum_2 = (n2)*(l+1 + r)/2;
			sum_2 *= -1;
			cout<<sum_1+sum_2<<endl;
		}
		else if(r % 2 == 0 && l%2 == 1 ){
			int n1 = (r - (l+1))/2 + 1;
			int sum_1 = n1*(l+1+ r)/2;

			int n2 = ((r-1) - l)/2 + 1;
			int sum_2  = (n2) * (r-1 + l)/2;
			sum_2 *= -1;
			cout<<sum_1 + sum_2<<endl;
		}
		else if(l % 2 == 0 && r%2 == 0){
			int n1 = (r-l)/2 + 1;
			int sum_1 = n1*(l+r)/2;

			int n2 = ((r-1)-(l+1))/2 + 1;
			int sum_2 = n2*(r +l)/2;
			sum_2 *= -1;
			cout<<sum_1 + sum_2<<endl;
		}
		else{
			int n1 = ((r-1)-(l+1))/2 + 1;
			int sum_1 = n1*(r+l)/2;

			int n2 = (r-l)/2 + 1;
			int sum_2 = n2*(l+r)/2;
			sum_2 *= -1;
			cout<<sum_1 + sum_2<<endl;
		}

	}
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