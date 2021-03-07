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
	int n,h,a,b,k;
	cin >> n >> h >> a >> b >> k;
	for(int i = 0; i < k; ++i){
		int ta,fa,tb,fb;
		cin >> fa >> ta >> fb >> tb;
		int time = abs(fa-fb);
		//cerr<<time<<endl;
		if(time  == 0){
			cout<<abs(ta-tb)<<endl;
			continue;
		}
		if(time != 0){
			if(ta < a){
				time += abs(a-ta);
				ta = a;
			}
			else if(ta > b){
				time += abs(b-ta);
				ta = b;
			}
			cerr<<time<<endl;
		}

		if(time != 0){
			time += abs(tb-ta);
			//cerr<<time<<endl;
		}
		

		//time += abs(ta-tb);
		//cerr<<time<<endl;
		cout<<time<<endl;
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