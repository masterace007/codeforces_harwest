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
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    int majority  = ceil((double) sum / (double) 2.f);
    int temp = sum/2;
    if(majority == temp)
        majority++;
    int formation_majority = 0;
    formation_majority = arr[0];
    vector<int> party_index;
    party_index.emplace_back(1);
    for(int i = 1; i < n; ++i){
        if(2*arr[i] <=  arr[0] ) {
            formation_majority += arr[i];
            party_index.emplace_back(i+1);
        }
        if(formation_majority >= majority){
            cout<<party_index.size()<<endl;
            for(auto x : party_index)
                cout<<x<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<0<<endl;


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
