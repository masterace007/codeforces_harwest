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
    vector<int> arr(n);
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    if(*min_element(all(arr)) ==  *max_element(all(arr)))
        cout<<1<<endl;
    else{
        map<int,int> arr_map;
        for(int i = 0; i < n; ++i){
            if(arr_map.find(arr[i]) == arr_map.end())
                arr_map.insert(make_pair(arr[i],1));
            else    
                ++arr_map[arr[i]];
        }
        int num = 0;
        for(auto x : arr_map)
            num += (x.second-1);
        cout<<n - num<<endl;
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
    cin >> t;
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