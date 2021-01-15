//
// Created by smoking_ace on 06-01-2021.
//
#include "bits/stdc++.h"
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
    map<pair<int,char>,int> arr;
    int n,k;
    cin >> n >> k;
    for(int j = 0; j < n; ++j) {
        for (int i = 0; i < k; ++i) {
            pair<int,char> p;
            char ch;
            cin >> ch;
            p.first = i;
            p.second = ch;
            if (arr.find(p) == arr.end())
                arr.insert(make_pair(p, 1));
            else
                arr[p]++;
        }
    }

    int answer[k];
    for(int i = 0; i < k; ++i)
        cin >> answer[i];

    vector<int> arr_max(k,INT_MIN);
    for(int i = 0; i < k ; ++i){
        for(auto x : arr){
            if(x.first.first == i && x.second > arr_max[i])
                arr_max[i] = x.second;
        }
    }

    int max_score = 0;
    for(int i = 0; i < k; ++i){
        max_score += arr_max[i]*answer[i];
    }
    cout<<max_score<<endl;



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
