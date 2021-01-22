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
    int n,d;
    cin >> n >> d;
    vector< vector<int> > arr;
    for(int i = 0; i < n; ++i){
        vector<int> temp;
        for(int j = 0; j < d; ++j){
            int a; cin >> a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    
    set<pair<int,int>> arr_set;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(i == j) continue;
            double dist = 0.00f;
            for(int k = 0; k < d; ++k){
                dist += pow(arr[i][k] - arr[j][k],2);
            }
            dist = sqrt(dist);
            int num = dist;
            if(dist == num)
                arr_set.insert(make_pair(i,j));
        }
    }
    cout<<arr_set.size()<<endl;

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