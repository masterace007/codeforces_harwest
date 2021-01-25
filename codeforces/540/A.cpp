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
    int n;
    cin >> n;
    string original;
    string current;
    cin >> original >> current;
    int min_movement = 0;
    for(int i = 0; i < n; ++i){
        int moves_1 = abs((original[i]-'0') - (current[i]-'0'));
        int moves_2 = 0;
        if((original[i]-'0') > (current[i]-'0'))
            moves_2 = abs((current[i]-'0'+10) - (original[i]-'0'));
        else{
            moves_2 = abs((original[i]-'0'+10) - (current[i]-'0'));
        }
        //cout<<moves_1<<" "<<moves_2<<endl;
        min_movement += min(moves_1,moves_2);
    }
    cout<<min_movement<<endl;
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