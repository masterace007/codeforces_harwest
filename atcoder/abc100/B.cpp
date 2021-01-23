#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace chrono;

void solve() {
    int d,n;
    cin >> d >> n;
    int a = pow(100,d);

    if(d == 0)
        a = 0;
    if(a == 0){
        int count = 0;
        int k = 1;
        while(count < n){
            if(k % 100 != 0){
                count++;
                if(count == n)
                    break;
            }
            k++;
        }
        cout<<k<<endl;
    }
    else{
        int ans = a*n;
        if (n % 100 == 0)ans += pow(100, d);
        cout<<ans<<endl;
    }
} 


int32_t main() {
    FASTIO;
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif 
    auto start1 = high_resolution_clock::now();
    int t = 1;
    //cin >> t;
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