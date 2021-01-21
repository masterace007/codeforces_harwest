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
int n,m,k;

string DecimalToBinaryString(int a)
{
    string binary = "";
    int mask = 1;
    for(int i = 0; i < 31; i++)
    {
        if((mask&a) >= 1)
            binary = "1"+binary;
        else
            binary = "0"+binary;
        mask<<=1;
    }
  
    return binary;
}

void solve() {
    cin >> n >> m >> k;
    int arr[m+1];
    for(int i = 0 ; i < m+1 ; ++i)
        cin >> arr[i];
    int friends = 0;
    string str = DecimalToBinaryString(arr[m]);
    for(int i = 0; i < m; ++i){
        string temp = DecimalToBinaryString(arr[i]);
        int count = 0;
        for(int j = 0; j < str.length(); ++j){
            if(str[j] != temp[j])
                count++;
        }
        if(count <= k)
            ++friends;
    }
    cout<<friends<<endl;

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