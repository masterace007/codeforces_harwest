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
    map<string,int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string str;
        cin >> str;
        if(arr.find(str) == arr.end()){
            arr.insert(make_pair(str,1));
        }
        else
            arr[str]++;
    }
    int max_occurrence = INT_MIN;
    for(auto x : arr){
        if(x.second > max_occurrence)
            max_occurrence = x.second;
    }
    set<string> arr_set;
    for(auto x : arr){
        if(x.second == max_occurrence)
            arr_set.insert(x.first);
    }
    for(auto x : arr_set)
        cout<<x<<endl;
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