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
	getline(cin,str);
	map<char,int> str_map;
	for(int i = 0; i < str.length(); ++i){
		if(str[i] == ' ')
			continue;
		if(str_map.find(str[i]) == str_map.end())
			str_map.insert(make_pair(str[i],1));
		else
			str_map[str[i]]++;
	}
	string letter;
	getline(cin,letter);

	for(int i = 0; i < letter.length(); ++i){
		if(letter[i] == ' ')
			continue;
		else{
			if(str_map.find(letter[i]) == str_map.end()){
				cout<<"NO";
				return;
			}else{
				if(str_map[letter[i]] > 0)
					str_map[letter[i]]--;
				else{
					cout<<"NO"<<endl;
					return;
				}
			}
		}
	}
	cout<<"YES"<<endl;
}

int32_t main() {
	FASTIO; 
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