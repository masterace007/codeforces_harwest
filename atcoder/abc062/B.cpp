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
    int a,b;
    cin >> a >> b;
    string str[a];
    for(int i = 0; i < a; ++i)
        cin >> str[i];
    string str_total;
    int k = 0;
    for(int i = 0; i < a; ++i){
        for(int j = 0; j < b; ++j)
            str_total += str[i][j];
    }

    int row = a + 2,column = b + 2;
    char ch[row][column];
    char ch_str[a][b];
    for(int i = 0; i < a; ++i){
        for(int j = 0; j < b; ++j)
            ch_str[i][j] = str_total[k++];
    }

    for(int i = 0; i < row; ++i)
        for(int j = 0; j < column ; ++j)
            ch[i][j] = '#';

    for(int i = 0; i < a; ++i){
        for(int j = 0; j < b; ++j)
            ch[i+1][j+1] = ch_str[i][j];
    }
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < column ; ++j)
            cout<<ch[i][j];
        cout<<endl;
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