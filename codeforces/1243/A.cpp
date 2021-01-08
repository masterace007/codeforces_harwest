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
    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        int arr[n];
        bool flag = false;
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        int count = 0;
        sort(arr,arr+n,greater<int>());
        for(int i = n; i >= 1; --i){
            count = 0;
            for(int j = 0; j < n; ++j){
                if(i <= arr[j])
                    count++;
            }
            if(count >= i){
                if(count > i)
                    count = i;
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<count<<endl;
    }
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
