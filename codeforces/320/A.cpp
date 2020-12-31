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
int N = 500;
void solve() {
	string str;
	cin >> str;
	bool flag = true;
	for(int i = 0; i < str.length() ; ){
		if(str[i]=='1' && str[i+1] == '4' && str[i+2] == '4')
			i+=3;
		else if(str[i]=='1' && str[i+1] =='4')
			i+=2;
		else if(str[i] == '1')
			i++;
		else{
			flag = false;
			break;
		}
	}
	if(flag)
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