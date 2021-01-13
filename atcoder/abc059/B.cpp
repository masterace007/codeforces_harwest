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
	string str1,str2;
	cin >> str1 >> str2;
	if(str1.length() > str2.length()){
		cout<<"GREATER"<<endl;
	}
	else if(str2.length() > str1.length())
		cout<<"LESS"<<endl;
	else{
		for(int i = 0; i < str1.length(); ++i){
			if( str1[i]-'0' < str2[i]-'0'){
				cout<<"LESS"<<endl;
				return;
			}
			else if(str1[i]-'0' > str2[i] - '0'){
				cout<<"GREATER"<<endl;
				return;
			}
		}
		cout<<"EQUAL"<<endl;
	}
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