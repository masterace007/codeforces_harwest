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
    string str;
    cin >> str;
    int length = str.length();
    string str1 = "";
    string str2 = "";
    for(int i = 0; i < length; ++i){
        if(i%2 == 0){
            str1 += '0';
            str2 += '1';
        }
        else{
            str1 += '1';
            str2 += '0';
        }
    }
    
    int cost_1 = 0;
    int cost_2 = 0;
    for(int i = 0; i < length; ++i){
        if(str[i] != str1[i])
            ++cost_1;
        if(str[i] != str2[i])
            ++cost_2;
    }
    cout<<min(cost_1,cost_2)<<endl;
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