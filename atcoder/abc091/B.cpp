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
    map<string,int> arr_n;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string str;
        cin >> str;
        if(arr_n.find(str) == arr_n.end())
            arr_n.insert(make_pair(str,1));
        else
            ++arr_n[str];
    }
    int m;
    cin >> m;
    map<string,int> arr_m;
    for(int i = 0; i < m; ++i){
        string str;
        cin >> str;
        if(arr_m.find(str) == arr_m.end())
            arr_m.insert(make_pair(str,1));
        else
            ++arr_m[str];
    }

    int max_num = 0;
    for(auto x : arr_n){
        int temp = x.second - arr_m[x.first];
        max_num = max(max_num,temp);
    }
    cout<<max_num<<endl;

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