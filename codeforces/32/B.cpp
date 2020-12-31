#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	string str;
	cin >> str;
	string str_decode = "";
	for(int i = 0; i < str.length() ; ){
		if(str[i] == '-' && str[i+1] == '.'){
			str_decode += '1';
			i+=2;
		}
		else if(str[i] == '-' && str[i+1] == '-'){
			str_decode += '2';
			i+=2;
		}
		else{
			str_decode += '0';
			i++;
		}
	}
	
	cout<<str_decode<<endl;
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