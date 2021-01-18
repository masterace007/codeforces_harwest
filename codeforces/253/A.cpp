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
   int x, y;
   cin >> x >> y;
   int mini = min(x,y);
   if(x >= y)
        for(int i = 0; i < mini ; ++i)
            cout<<"BG";
    else
        for(int i = 0; i < mini ; ++i)
            cout<<"GB";

    if(mini == x){
        for(int i = 0; i < y - mini; ++i)
            cout<<"G";
    }
    else{
        for(int i = 0; i < x - mini; ++i)
            cout<<"B";
    }

}


int32_t main() {
    FASTIO;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
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