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
	int count = 0,counter = 0;
	for(int i = 1; i < str.length(); ++i){
		counter = 0;
		if(str[i-1] == str[i]){
			if(count >= 6){
				counter = 1;
				break;
			}
			count++;
		}
		else{
		    if(count == 6){
		        counter=1;
		        break;
		    }
			count = 0;
		}
	}
	if(counter == 1 || count == 6)
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