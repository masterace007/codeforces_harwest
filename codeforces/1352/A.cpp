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
	int n;
	cin >> n;
	string str = to_string(n);
	string str_new;
	for(int i = 0; i < str.length()-1; ++i)
		str_new.push_back('0');
	int count_rep = 0;
	for(int i = 0; i < str.length(); ++i)
		if(str[i] != '0')
			++count_rep; 

	if(str.length() == 1){
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else{
		cout<<count_rep<<endl;
		for(int i = 0; i < str.length(); ++i){
			if(str[i] == '0')
				continue;
			else{
				cout<<str[i];
				string str_temp = str_new.substr(0,str.length()-i-1);
				cout<<str_temp<<" ";
			}
		}
		cout<<endl;
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