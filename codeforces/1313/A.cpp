#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;	

void solve(){
	int s[3];
        cin>>s[0]>>s[1]>>s[2];
        sort(s,s+3);
        int ans=0;
        int a=s[0],b=s[1],c=s[2];
        if(a>0)
        {
            ans+=1;
            a--;
        }
        if(b>0)
        {
            ans+=1;
            b--;
        }
        if(c>0)
        {
            ans+=1;
            c--;
        }
        
        if(b>0 && c>0)
        {
            ans+=1;
            b--;
            c--;
        }
        if(a>0 && c>0)
        {
            ans+=1;
            a--;
            c--;
        }
        if(a>0 && b>0)
        {
            ans+=1;
            a--;
            b--;
        }
        
        
        if(a>0 && b>0 && c>0)
        {
            ans+=1;
        }
        cout<<ans<<endl;
}

signed main() {
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
	auto start1 = high_resolution_clock::now();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
	cerr << "Time: " << duration.count() / 1000 << endl;
#endif
	return 0;
}