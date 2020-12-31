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
	int count_4 = 0;
	int count_7 = 0;
	for(int i = 0; i < str.length() ; ++i)
		if(str[i] == '4') count_4++;
		else if(str[i] == '7')count_7++;
		
	//cout<<count_4<<" "<<count_7<<endl;
	count_4 += count_7;
	if(count_4 == 7 || count_4 == 4)
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