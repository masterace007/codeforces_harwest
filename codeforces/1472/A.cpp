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

bool isPowerOfTwo(int n)
{
	if(n==0)
		return false;

	return (ceil(log2(n)) == floor(log2(n)));
}

void solve() {
	int w,h,n;
	cin >> w >> h >> n;
	int cards = 0;
	if(n == 1)
		cout<<"YES"<<endl;
	else if(w*h % 2 != 0)
		cout<<"NO"<<endl;
	else{
	    cards = 1;
		if(w%2 == 0){
			while(true){
				w = w / 2;
				cards *= 2;
				if(w % 2 != 0)
					break; 
			}
		}
		if(h%2 == 0){
			while(true){
				h = h/2;
				cards *= 2;
				if(h % 2 != 0)
					break; 
			}
		}
		if(cards >= n)
		cout<<"YES"<<endl;
	    else
		cout<<"NO"<<endl;
	}

	
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