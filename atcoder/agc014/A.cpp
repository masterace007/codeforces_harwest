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
    int a,b,c;
    cin >> a >> b >> c;
    int count = 0;
    if(a == b && b==c && b % 2 == 0){
        cout<<-1<<endl;
        return;
    }


    while(true){
        if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0){
            break;
        }
        count++;
        int temp_a = a,temp_b = b,temp_c = c;
        a = b = c = 0;
        if(temp_a % 2 == 0){
            int num = temp_a/2;
            b += num;
            c += num;
        }
        if(temp_b % 2 == 0){
            int num = temp_b/2;
            a += num;
            c += num;
        }
        if(temp_c % 2 == 0){
            int num = temp_c/2;
            b += num;
            a += num;
        }
    }
    cout<<count<<endl;
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
