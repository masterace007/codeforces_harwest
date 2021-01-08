//
// Created by smoking_ace on 06-01-2021.
//
#include<bits/stdc++.h>
#define endl       '\n'
#define pi         3.141592653590
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
using namespace chrono;

void solve() {
    int t;
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	if(a % b == 0)
    		cout<<0<<endl;
    	else{
    		if(a < b){
    			cout<<b-a<<endl;
    		}
    		else{
    			int num = a % b;
    			cout<<b-num<<endl;
    		}
    	}
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    fastio();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
