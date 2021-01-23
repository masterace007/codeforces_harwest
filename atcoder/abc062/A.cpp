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
    int arr_1[] ={1,3,5,7,8,10,12};
    int arr_3[] = {4,6,9,11};
    int a,b;
    cin >> a >> b;
    int flag_a = 0,flag_b = 0;
    for(int i = 0; i < 7; ++i){
        if(a == arr_1[i])
            flag_a = 1;
        if(b == arr_1[i])
            flag_b = 1;
    }
    //cout<<flag_a<<" "<<flag_b<<endl;
    if(flag_a && flag_b){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i = 0; i < 4; ++i){
        if(a == arr_3[i])
            flag_a = 3;
        if(b == arr_3[i])
            flag_b = 3;
    }
    //cout<<flag_a<<" "<<flag_b<<endl;
    if(flag_a && flag_b){
        if(flag_a == flag_b){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    if(a == 2)
        flag_a = 2;
    else if(b == 2)
        flag_b = 2;
    //cout<<flag_a<<" "<<flag_b<<endl;
    if(flag_a && flag_b){
        if(flag_b == flag_a){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;

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