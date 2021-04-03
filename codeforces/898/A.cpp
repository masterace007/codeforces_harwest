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
	string str;
	cin >> str;

	if(str[str.length()-1] - '0' > 5){
		if(str.length() == 1)
			cout<<10<<endl;
		else{
			int temp = 0;
			for(int i = 0; i < str.length(); ++i){
				int num = str[i] - '0';
				temp *= 10;
				temp += num;
			}
			int record = -1;
			for(int i = str.length()-2; i >= 0; --i){
				if(str[i] != '9'){
					record = i;
					break;
				}
			}
			if(record == -1){
				cout<<1;
				for(int i = 0; i < str.length(); ++i)
					cout<<0;
				cout<<endl;
			}
			else{
				str[record] += 1;
				for(int i = record+1; i < str.length(); ++i)
					str[i] = '0';
				cout<<str<<endl;
			}
		}
	}
	else if(str[str.length()-1] == '0')
		cout<<str<<endl;
	else{
		if(str.length() == 1)
			cout<<0<<endl;
		else{
			// str[str.length() - 2] -= 1;
			str[str.length() - 1] = '0';
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
	// cin >> t;
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