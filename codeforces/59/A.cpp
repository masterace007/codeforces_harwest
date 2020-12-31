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
	int count_lower = 0,count_upper = 0;
	for(int i = 0; i < str.length() ; ++i){
		if(islower(str[i]))
			count_lower++;
		else
			count_upper++;
	}
	if(count_lower >= count_upper)
		transform(str.begin(),str.end(),str.begin(),::tolower);
	else
		transform(str.begin(),str.end(),str.begin(),::toupper);
	cout<<str<<endl;
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