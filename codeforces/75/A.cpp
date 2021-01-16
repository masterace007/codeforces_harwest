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
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	int total = stoi(str1) + stoi(str2);
	string total_str = to_string(total);
	string total_str_new = "";
	for(int i = 0; i < total_str.length() ; ++i)
		if(total_str[i] != '0')
			total_str_new += total_str[i];
	
	int total_int = stoi(total_str_new);


	string str1_new = "";
	string str2_new = "";
	for(int i = 0; i < str1.length() ; ++i)
		if(str1[i] != '0')
			str1_new += str1[i];
	for(int i = 0; i < str2.length() ; ++i)
		if(str2[i] != '0')
			str2_new += str2[i];
	
	int total_new = stoi(str1_new) + stoi(str2_new);
	if(total_new == total_int)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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