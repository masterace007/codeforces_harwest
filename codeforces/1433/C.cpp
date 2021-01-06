//
// Created by singh on 06-01-2021.
//
#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
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
    int max = INT_MIN;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(max < arr[i])
            max = arr[i];
    }

    for(int i = 0; i < n; ++i){
        if(arr[i] ==  max){
            if(i-1 >= 0) {
                if (arr[i - 1] < max) {
                    cout << i + 1 << endl;
                    return;
                }
            }
            if(i +1 < n) {
                if (arr[i + 1] < max) {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
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
    cin >> t;
    while (2*t--) {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
    return 0;
}
