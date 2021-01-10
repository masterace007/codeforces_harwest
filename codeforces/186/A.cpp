#include<bits/stdc++.h>
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
	cin >> str1;
	cin >> str2;
	if(str1 == str2)
		cout<<"YES"<<endl;
	else{
		int count = 0;
		if(str1.length() != str2.length())
			cout<<"NO"<<endl;
		else{
			set<char> str1_set;
			set<char> str2_set;
			for(int i = 0; i < str1.length(); ++i){
				str1_set.insert(str1[i]);
				str2_set.insert(str2[i]);
			}
			for(int i = 0; i < str1.length(); ++i){
				if(str1[i] != str2[i]){
					count++;
				}
			}
			if(count == 2 && str1_set == str2_set){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
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