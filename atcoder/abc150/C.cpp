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
    vector<int> original;
    for(int i = 1; i <= n; ++i)
        original.push_back(i);
    vector<int> a;
    for(int i = 1; i <=n ; ++i){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    vector<int> b;
    for(int i = 0; i < n; ++i){
        int temp;cin >> temp;
        b.push_back(temp);
    }
    int count = 0,count_a = 0,count_b = 0;
    do{
        ++count;
        vector<int> temp_original;
        for(int i = 0; i < n; ++i)
            temp_original.push_back(original[i]);
        if(a == temp_original){
            count_a = count;
        }
        if(b == temp_original){
            count_b = count;
        }
        if(count_a > 0 && count_b > 0)
            break;

    }while(next_permutation(all(original)));
    cout<<abs(count_a-count_b)<<endl;
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