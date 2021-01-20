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

const int N = 1e5;
int n,m;

void solve() {
    cin >> n >> m;
    set<pair<int,string>> arr_set;
    vector<pair<int,string>> arr;
    map<pair<int,string>,int> arr_map;
    int penalities = 0;
    for(int i = 0; i < m; ++i){
        int a;
        string temp;
        cin >> a >> temp;
        if(temp != "AC"){
            string temp_temp = "AC";
            if(arr_map.find(make_pair(a,temp_temp)) == arr_map.end())
                arr_map.insert(make_pair(make_pair(a,temp_temp),1));
            else
                arr_map[make_pair(a,temp_temp)]++;
        }

        if(temp == "WA"){
            if(!arr_set.count(make_pair(a,"AC"))){
                penalities++;
            }
        }
        else if(temp == "AC" )
            arr_set.insert(make_pair(a,temp));
    }

    if(arr_map.size() != arr_set.size()){
        for(auto x : arr_map){
            if(!arr_set.count(x.first))
                penalities -= x.second; 
        }
    }
    cout<<arr_set.size()<<" "<<penalities<<endl;
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