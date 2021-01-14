#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	set<string> str_set;
	string str;
	cin >> str;
	char ch = str[str.length()-1];
	for(int i = 0; i < n; ++i){
		if(str_set.empty())
			str_set.insert(str);
		else{
			string temp;cin >> temp;
			if(str_set.count(temp)){
				cout<<"No"<<endl;
				return;
			}
			else{
				if(ch != temp[0]){
					cout<<"No"<<endl;
					return;
				}
				ch = temp[temp.length()-1];
				str_set.insert(temp);
			}
		}
	}
	cout<<"Yes"<<endl;
}


int32_t main() {
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