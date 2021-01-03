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
	char arr[] = {'h','e','l','l','o'};
	int k  = 0;
	int check = false;
	char before = 'h';
	for(int i = 0; i < str.length() ; ++i){
		if(str[i] == arr[k]){
		    k++;
		}
	}
	if(k >= 5)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}