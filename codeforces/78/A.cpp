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
	bool flag = true;
	for(int i = 0; i < 3; ++i){
		string str;
		getline(cin,str);
		int count = 0;
		for(int k = 0; k < str.length(); ++k)
			if(str[k] == 'a' || str[k] == 'e' || str[k] == 'o' || str[k] == 'u' || str[k] == 'i' ){
				count++;
			}

		if(i == 0){
			if(count != 5)
			{
				flag = false;
				break;
			}
		}
		else if(i == 1){
			if(count != 7){
				flag = false;
				break;
			}
		}
		else if(i==2){
			if(count != 5){
				flag = false;
				break;
			}
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