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
    int a,b,c,d;
    string str;
    cin >> str;
    a = str[0] - '0';
    b = str[1] - '0';
    c = str[2] - '0';
    d = str[3] - '0';
    
    int num_1 = a + b + c + d;
    int num_2 = a + b + c - d;
    int num_3 = a + b - c + d;
    int num_4 = a - b + c + d;
    int num_5 = a - b - c - d;
    int num_6 = a - b - c + d;
    int num_7 = a - b + c - d;
    int num_8 = a + b - c - d;

    if(num_1 == 7)
        cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
    else if(num_2 == 7)
        cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
    else if(num_3 == 7)
        cout<<a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
    else if(num_4 == 7)
        cout<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
    else if(num_5 == 7)
        cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
    else if(num_6 == 7)
        cout<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
    else if(num_7 == 7)
        cout<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
    else if(num_8 == 7)
        cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
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