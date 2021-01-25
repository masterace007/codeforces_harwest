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
    string str;
    map<string,int> arr_map;
    cin >> str;
    for(int i = 1; i < n; ++i){
        string temp;
        temp.push_back(str[i-1]);temp.push_back(str[i]);
        if(arr_map.find(temp) ==  arr_map.end())
            arr_map.insert(make_pair(temp,1));
        else
            ++arr_map[temp];
    }
    string res;
    int max_occ = INT_MIN;
    for(auto x : arr_map){
        if(x.second > max_occ){
            max_occ = x.second;
            res = x.first;
        }
    }
    cout<<res<<endl;
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