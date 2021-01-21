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
int n,m;

void solve() {
    cin >> n >> m;
    set<int> row;
    set<int> column;
    char ch[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> ch[i][j];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(ch[i][j] == 'S'){
                row.insert(i);
                column.insert(j);
            }
        }
    }
    cout<<n*m - (row.size()*column.size())<<endl;
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