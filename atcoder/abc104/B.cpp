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
	string str;
	cin >> str;
	if(str[0] == 'A'){
		int length = str.length();
		int sublength = str.length()-2-1 ;
		string str_temp = str.substr(2,sublength);
		if(str_temp.find('C') == string::npos){
			cout<<"WA"<<endl;
			return ;
		}
		int count_c = 0;
		for(int i = 1 ; i < str.length() ; ++i){
			if(!islower(str[i]) && str[i] != 'C'){
				cout<<"WA"<<endl;
				return ;
			}
			if(str[i] == 'C')
				count_c++;
		}
		if(count_c < 2)
			cout<<"AC"<<endl;
		else
			cout<<"WA"<<endl;
	}
	else
		cout<<"WA"<<endl;
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