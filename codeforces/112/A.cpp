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
	string str1,str2;
	cin >> str1;
	cin >> str2;
	transform(str1.begin(),str1.end(),str1.begin(),::tolower);
	transform(str2.begin(),str2.end(),str2.begin(),::tolower);
	int count = 0;
	for(int i = 0; i < str1.length() ; ++i)
	{
		if(str1[i] != str2[i]){
			if(str1[i] > str2[i])
				count = 1;
			else
				count = -1;
			break;
		}
	}
	cout<<count<<endl;
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