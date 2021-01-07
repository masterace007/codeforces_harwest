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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> arr_even_index;
        vector<pair<int,int>> arr_odd_index;
        for(int i = 0; i < n; ++i){
            int a;
            cin >> a;
            if(a % 2 == i % 2  )
                continue;
            else if(a % 2 == 0 && i % 2 != 0)
                arr_odd_index.emplace_back((make_pair(a,i)));
            else if(a % 2 != 0 && i % 2 == 0)
                arr_even_index.emplace_back(make_pair(a,i));
        }
        if(arr_odd_index.empty() && arr_even_index.empty())
            cout<<0<<endl;
        else if(arr_even_index.size() == arr_odd_index.size())
            cout<<arr_even_index.size()<<endl;
        else
            cout<<-1<<endl;

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
