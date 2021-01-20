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

const int N = 2e5;
int arr[N],n;

void solve() {
    cin >> n;
    int max_num = INT_MIN,max_num_2 = INT_MIN;
    int record_index_max = 0, record_index_max_2 = 0;
    for(int i = 0; i < n; ++i){
        int a; cin >> a;
        if(a > max_num){
            max_num_2 = max_num;
            max_num = a;
            record_index_max_2 = record_index_max;
            record_index_max = i + 1;
        }
        else if(a > max_num_2){
            max_num_2 = a;
            record_index_max_2 = i+1;
        }
    }
    
    for(int i = 1; i <= n; ++i){
        if(i != record_index_max)
            cout<<max_num<<endl;
        else if(i == record_index_max)
            cout<<max_num_2<<endl;
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