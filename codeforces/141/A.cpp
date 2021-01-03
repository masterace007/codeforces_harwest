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

void solve() {
	string str1,str2;
	map<char,int> original_map;
	cin >> str1;
	cin >> str2;
	string ground;
	cin >> ground;
	for(int i = 0; i < str1.length(); ++i)
		if(original_map.find(str1[i]) == original_map.end())
			original_map.insert(make_pair(str1[i],1));
		else
			original_map[str1[i]]++;
	for(int i = 0; i < str2.length() ; ++i)
		if(original_map.find(str2[i]) == original_map.end())
			original_map.insert(make_pair(str2[i],1));
		else
			original_map[str2[i]]++;


	map<char,int> ground_map;
	for(int i = 0; i < ground.length() ; ++i)
		if(ground_map.find(ground[i]) == ground_map.end())
			ground_map.insert(make_pair(ground[i],1));
		else
			ground_map[ground[i]]++;

	if(original_map == ground_map)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}


int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}