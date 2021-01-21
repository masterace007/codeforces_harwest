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
    int n,m,x;
    cin >> n >> m >> x;
    int arr[m];
    for(int i = 0; i < m; ++i)
        cin >> arr[i];

    int location[n+1];
    for(int i = 0; i < n+1; ++i)
        location[i] = i;
    int min_distance = INT_MAX;
    int min_origin = 0,min_n = 0;
    int temp_x_o = x, temp_x_n = x;
    while(temp_x_o != 0){
        --temp_x_o;
        for(int i = 0; i < m; ++i){
            if(temp_x_o ==  arr[i]){
                //cout<<arr[i]<<" ";
                min_origin++;
                break;
            }
        }
    }
    //cout<<endl;
    while(temp_x_n != n){
        ++temp_x_n;
        for(int i = 0; i < m; ++i){
            if(temp_x_n ==  arr[i]){
                //cout<<arr[i]<<" ";
                min_n++;
                break;
            }
        }
    }
    //cout<<endl;
    //cout<<min_origin<<" "<<min_n<<endl;
    min_distance = min(min_origin,min_n);
    cout<<min_distance<<endl;
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