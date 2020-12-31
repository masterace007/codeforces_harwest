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
	int num = stoi(str);
	num++;
	str = to_string(num);
	while(true){
		set<int> set_distict;
		for(int i = 0; i < str.length() ; ++i){
			set_distict.insert(str[i]);
		}

		if(set_distict.size() == 4)
			break;
		else{
			num +=1;
			str = to_string(num);
		}
	}
	cout<<str<<endl;
	
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