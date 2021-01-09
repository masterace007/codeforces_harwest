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
	int count_mishika = 0, count_chris = 0;
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		if(a > b)
			count_mishika++;
		else if(b > a)
			count_chris++;
	}
	if(count_mishika > count_chris)
		cout<<"Mishka"<<endl;
	else if(count_chris > count_mishika)
		cout<<"Chris"<<endl;
	else
		cout<<"Friendship is magic!^^"<<endl;
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