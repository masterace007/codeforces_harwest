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
	int n,x;
	cin >> n >> x;
	vector<int> arr(n);
	int even = 0, odd = 0;
	for(auto &i: arr){
		cin >> i;
		if(i % 2 == 0)
			even++;
		else
			odd++;
	}
	if(odd == 0)
		cout<<"No"<<endl;
	else{
		if(x % 2 == 1 && x <= odd){
			cout<<"Yes"<<endl;
		}
		else{
			// there is a situation where e is even
			if(x % 2 == 0){
				if(even > 0 && odd >= x)
					cout<<"Yes"<<endl;
				else{
					int temp_odd = 0;
					if(odd > 0 && odd % 2 == 0)
						temp_odd = odd - 1;
					else
						temp_odd = odd;
					if(temp_odd + even >= x && even > 0)
						cout<<"Yes"<<endl;
					else
						cout<<"No"<<endl;
				}
			}
			else{
				if(x <= odd)
					cout<<"Yes"<<endl;
				else{
					int temp_odd = 0;
					if(odd > 0 && odd % 2 == 0)
						temp_odd = odd - 1;
					else
						temp_odd = odd;
					if(temp_odd + even >= x)
						cout<<"Yes"<<endl;
					else
						cout<<"No"<<endl;
				}
			}
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
	cin >> t;
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