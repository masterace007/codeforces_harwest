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
	string s,t;
	cin >> s >> t;
	if(s.length() != t.length()){
		cout<<"No"<<endl;
		return;
	}
	else{
		char ch[] = {'a','e','i','o','u'};
		for(int i = 0; i < s.length(); ++i){
			bool flag_1 = false,flag_2 = false;
			for(char c : ch){
				if(s[i] == c)
					flag_1 = true;
				if(t[i] == c)
					flag_2 = true;
			}
			if(flag_1 && flag_2 || !flag_1 && !flag_2)
				continue;
			else{
				cout<<"No"<<endl;
				return;
			}
		}
		cout<<"Yes"<<endl;
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