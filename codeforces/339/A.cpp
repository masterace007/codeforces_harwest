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
	vector <char> arr;
	for(int i = 0; i < str.length(); ++i){
	    if(str[i] != '+')
	        arr.push_back(str[i]);
	}
	sort(all(arr));
    if(str.length() > 1){
		for(int i = 0; i < arr.size() - 1; ++i)
			cout<<arr[i]<<"+";
		cout<<arr.back();
    }
    else
        cout<<arr[0];
    cout<<endl;
	
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