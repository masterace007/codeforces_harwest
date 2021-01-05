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
	string str;
	cin >> str;
	string new_formed = "";
	int k = 0;
	for(int i = 0; i < str.length(); ++i){
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || 
			str[i] == 'I' || str[i] == 'i'  || str[i] == 'O' || str[i] == 'o' 
			|| str[i] == 'u' || str[i] == 'U' || str[i] == 'Y' || str[i] == 'y' )
			continue;
		else{
		    
			new_formed += '.';
			new_formed += str[i];
		}
	}
	for(int i = 0; i < new_formed.length(); ++i){
		if(isalpha(new_formed[i]))
			new_formed[i] = tolower(new_formed[i]);
	}
	cout<<new_formed<<endl;
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