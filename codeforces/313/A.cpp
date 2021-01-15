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
	if(num < 0){
		string str1,str2;
		str1 = str;
		str2 = str;
		int length = str1.length() -1 ;
		str1.erase(str1.begin() + length);
		int num_new = stoi(str1);
		length = str2.length() - 2;
		str2.erase(str2.begin() + length );
		int num_new_2 = stoi(str2);
		num = max(num,max(num_new,num_new_2));
	}
	cout<<num<<endl;
	
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