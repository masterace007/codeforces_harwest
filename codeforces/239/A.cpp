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
    int y,k,n;
    cin >> y >> k >> n;
    if(y == n || y > n)
        cout<<-1<<endl;
    else{
        int temp = n - y;
        if(temp < k){
            if((y+temp)%k == 0){
                cout<<temp<<endl;
                return;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        int temp_x_y = 0;
        if(y < k){
            temp_x_y = k  - y;
        }
        else
        {
            int rem = y % k;
            if(rem == 0)
                temp_x_y = k;
            else
                temp_x_y = k - rem;

        }
        int first_term = temp_x_y;
        temp = temp - first_term;
        int no_terms = floor((double) temp/k) + 1;
        /*if(first_term == 0){
            first_term += k;
            no_terms --;
        }*/

        for(int i = 0 ; i < no_terms; ++i ){
            cout<<first_term<<" ";
            first_term += k;
        }
        
        cout<<endl;
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