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
	int n;
	cin >> n;
	if(n == 1 || n == 2)
		cout<<"No"<<endl;
	else{
		int no_odd = (n-1)/2 + 1;
		if(n % 2 == 0 || no_odd % 2 == 0){
			cout<<"Yes"<<endl;
			cout<<n/2<<" ";
			for(int i = 2; i <= n; i += 2)
				cout<<i<<" ";
			cout<<endl;
			cout<<no_odd<<" ";
			for(int i = 1; i <= n; i += 2)
				cout<<i<<" ";
			cout<<endl;
		}
		else{
			vector<int> arr;
			vector<int> temp;
			cout<<"Yes"<<endl;
			bool ok = true;
			for(int i = 1; i <= n; i += 2){
				if(ok){
					ok = false;
					arr.emplace_back(i);
				}
				else{
					ok = true;
					temp.emplace_back(i);
				}
			}

			for(int i = 2; i <= n; i += 2){
				if(ok){
					ok = false;
					arr.emplace_back(i);
				}
				else{
					ok = true;
					temp.emplace_back(i);
				}
			}
			cout<<arr.size()<<" ";
			for(int i : arr)
				cout<<i<<" ";
			cout<<endl;
			cout<<temp.size()<<" ";
			for(int i : temp)
				cout<<i<<" ";
			cout<<endl;

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