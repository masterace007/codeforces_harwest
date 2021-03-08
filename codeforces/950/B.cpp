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
	int n,m;
	cin >> n >> m;
	vector<int> a(n),b(m);
	for(auto &i: a)
		cin >> i;
	for(auto &i: b)
		cin >> i;

	int count = 0;
	if(n > m){
		int sum_a = a[0],sum_b = b[0];
		for(int i = 0, j= 0; i < n;){
			if(sum_a < sum_b){
				i++;
				sum_a += a[i];
			}
			else if(sum_b < sum_a){
				j++;
				sum_b += b[j];
			}
			else if(sum_a == sum_b){
				count++;
				i++;
				j++;
				sum_a = a[i];
				sum_b = b[j];
			}
		}
	}
	else{
		int sum_a = a[0],sum_b = b[0];
		for(int i = 0, j = 0; j < m;){
			if(sum_a < sum_b){
				i++;
				sum_a += a[i];
			}
			else if(sum_b < sum_a){
				j++;
				sum_b += b[j];
			}
			else if(sum_a == sum_b){
				count++;
				i++;
				j++;
				sum_a = a[i];
				sum_b = b[j];
			}
		}
	}
	cout<<count<<endl;

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