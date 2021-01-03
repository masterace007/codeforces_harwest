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
	int n;
	cin >> n;
	string str;
	cin >> str;
	int count_a = 0;
	int count_d = 0;
	for(int i = 0 ; i < str.length() ; ++i)
		if(str[i] == 'A')
			count_a++;
		else
			count_d++;
	if(count_a > count_d)
		cout<<"Anton"<<endl;
	else if(count_a < count_d)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;

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