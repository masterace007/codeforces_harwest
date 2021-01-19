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

const int N = 100001;
int A[N],B[N],M[N],a,b,m;

void solve() {
    cin >> a >> b >> m;
    int arr_a[a],arr_b[a];
    for(int i = 0; i < a ; ++i){
        cin >> A[i];
        arr_a[i] = A[i];
    }
    for(int i = 0; i < b ; ++i){
        cin >> B[i];
        arr_b[i] = B[i];
    }
    sort(arr_a,arr_a+a);
    sort(arr_b,arr_b+b);

    vector<int> arr_cost_total;

    int consider = min(a,b);
    for(int i = 0; i < consider ; ++i){
        int temp = arr_a[i] + arr_b[i];
        arr_cost_total.emplace_back(temp);
    }
    vector<int> arr_cost_total_discount;

    for(int i = 0; i < m ; ++i){
        int idx_1,idx_2,discount;
        cin >> idx_1 >> idx_2 >> discount;
        --idx_1;--idx_2;
        arr_cost_total_discount.emplace_back(A[idx_1] + B[idx_2] - discount);
    }
    int mini_amount = min(*min_element(all(arr_cost_total)),*min_element(all(arr_cost_total_discount)));
    cout<<mini_amount<<endl;

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