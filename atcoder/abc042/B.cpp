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

int n,l;

void solve() {
    cin >> n >> l;
    map<string,int> arr;
    for(int i = 0; i < n; ++i){
        string str;
        cin >> str;
        if(arr.find(str) == arr.end())
            arr.insert(make_pair(str,1));
        else
            arr[str]++;
    }
    string str_temp = "";
    for(auto x : arr){
        for(int i = 0; i < x.second ; ++i)
            str_temp += x.first;
    }
    cout<<str_temp<<endl;
    
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