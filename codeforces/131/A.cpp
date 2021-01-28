#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	string str;
	cin >> str;
	bool flag_all = true,flag_other = true;
	for(int i = 0; i < str.length(); ++i){
		if(!isupper(str[i])){
			flag_all = false;
			break;
		}
	}
	if(flag_all){
		cout<<(char)tolower(str[0]);
		for(int i = 1; i < str.length(); ++i)
			cout<<(char)tolower(str[i]);
	}
	else{
		for(int i = 1; i < str.length(); ++i){
			if(!isupper(str[i])){
				flag_other = false;
			}
		}
		if(flag_other && islower(str[0])){
			cout<<(char)toupper(str[0]);
			for(int i = 1; i < str.length(); ++i)
				cout<<(char)tolower(str[i]);
		}
		else{
			cout<<str<<endl;
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