//
// Created by smoking_ace on 06-01-2021.
//
#include<bits/stdc++.h>
#define endl       '\n'
#define pi         3.141592653590
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
using namespace chrono;

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> arr;
    for(int i = 0; i< n; ++i){
        int a,b;
        cin >> a >> b;
        arr.emplace_back(a,b);
        if(a != b){
            cout<<"rated"<<endl;
            return;
        }
    }
    for(int i = 0; i < n - 1; ++i){
        for(int j = i+1; j < n; ++j){
            if(arr[i].first < arr[j].first){
                cout<<"unrated"<<endl;
                return;
            }
        }
    }
    cout<<"maybe"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    fastio();
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
