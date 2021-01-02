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
	string str1,str2;
	cin >> str1 >> str2;
	int num1 = 0, num2 = 0;
	for(int i = 0; i < str1.length() ; ++i)
		num1 += str1[i] - '0';
	for(int i = 0; i < str2.length() ; ++i)
		num2 += str2[i]- '0';
	if(num1 > num2)
        cout<<num1<<endl;
    else
        cout<<num2<<endl;
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