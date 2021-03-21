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
	string str;
	cin >> n >> str;
	if(str.find("ACTG") != string::npos){
		cout<<0<<endl;
		return;
	}
	else{
		if(str.find("ACTG") != string::npos)
			cout<<0<<endl;
		else{
			int cost = INT_MAX,temp = 0;
			for(int i = 0; i < n-3; ++i){
				int num = 0;
				temp = 0;
				num = min(abs(str[i] - 'A'),abs(str[i]-'Z')+1);
				
				temp += num;
				num = min(abs(str[i+1] - 'C'),abs(str[i+1] - 'Z')+3);
				temp += num;
				
				num = min(abs(str[i+2] - 'T'),abs(str[i+2]-'A') +7);
				temp += num;
				
				num = min(abs(str[i+3] - 'G'),abs(str[i+3] - 'Z')+ 7);
				temp += num;
				cost = min(cost,temp);
			}
			cout<<cost<<endl;
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