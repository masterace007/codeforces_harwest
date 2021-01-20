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
int n;
const int N = 1e5;
int arr[N];

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    int max_count = INT_MIN;
    int count = 0;
    for(int i = 0; i < n-1; ++i){
        if(arr[i] >= arr[i+1]){
            count++;
        }
        else{
            max_count = max(count,max_count);
            count = 0;
        }
    }
    max_count = max(count,max_count);
    cout<<max_count<<endl;
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