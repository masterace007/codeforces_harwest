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
    vector< pair<int,int> > arr;
    vector< pair<int,int> > checkpoints;
    for(int i = 0; i < n; ++i){
        int a,b; cin >> a >> b;
        arr.push_back(make_pair(a,b));
    }
    for(int i = 0; i < m; ++i){
        int a,b; cin >> a >> b;
        checkpoints.push_back(make_pair(a,b));
    }
    vector<int> arr_dist_final;
    for(int i = 0; i < n; ++i){
        vector<int>  arr_distance;
        int mn_dist = INT_MAX;
        for(int j = 0; j < m; ++j){
            int temp = abs(arr[i].first - checkpoints[j].first) + 
                                        abs(arr[i].second - checkpoints[j].second);
            if(mn_dist > temp )
                mn_dist  = temp;
        }
        for(int j = 0; j < m; ++j){
            int temp = abs(arr[i].first - checkpoints[j].first) + 
                                        abs(arr[i].second - checkpoints[j].second);
            if(mn_dist == temp)
                arr_distance.push_back(j);

        }
        arr_dist_final.push_back(*min_element(all(arr_distance)) + 1);
    }
    for(auto x: arr_dist_final)
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