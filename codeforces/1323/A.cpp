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
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        int count_even = 0;
        int count_odd = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                count_even++;
            else
                count_odd++;
        }
        if(count_even ||  count_odd >= 2){
            if(count_even > 0){
                cout<<1<<endl;
                for(int i = 0; i < n; ++i){
                    if(arr[i] % 2 == 0) {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
            else{
                cout<<2<<endl;
                bool flag = true;
                bool check = false;
                for(int i = 0; i < n; ++i){
                    if(arr[i] % 2 == 1 && flag){
                        cout<<i+1<<" ";
                        flag = false;
                        check = true;
                        continue;
                    }
                    if(check && arr[i] % 2 == 1){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
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
