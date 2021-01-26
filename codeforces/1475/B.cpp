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
    if(n < 2020){
        cout<<"NO"<<endl;
        return;
    }
    int num = n / 2020;
    int temp = n % 2020;
    int mul_2020 = num - temp;
    //cout<<num<<" "<<temp<<" "<<mul_2020<<endl;
    int check = 0;
    if(num >= 0 && temp >= 0 && mul_2020 >= 0)
        check = mul_2020*2020 + temp*2021;
    if(check == n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
    cin >> t;
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