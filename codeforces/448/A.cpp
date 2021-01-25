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
    int a1,a2,a3;
    int b1,b2,b3;
    int n; 
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    int sum_cups = a1 + a2 + a3;
    int sum_medals = b1 + b2 + b3;
    int required = 0;
    int rem = sum_cups % 5;
    required += sum_cups/5;
    if(rem > 0)
        ++required;
    required += sum_medals/10;
    rem = sum_medals%10;
    if(rem > 0)
        ++required;
    //cout<<required<<" "<<n<<endl;
    if(required <= n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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