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
	int count = 0,count_max = 0;

    for(int i = 0; i < n; ++i){
    	if(str[i] == 'A'){
    		count = 0;
    		for(int j = i+1; j < n; ++j){
    			if(str[j] == 'P')
    				count++;
    			else
    				break;
    		}
    	}
    	if(count > count_max)
    		count_max = count;
    }
	cout<<count_max<<endl;
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}