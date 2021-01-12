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
    int n;
    cin >> n;
    int max_length = INT_MIN;
    int record_index = 0;
    vector<pair<int,int>> arr;
    vector<int> distance;
    for(int i = 0; i < n; ++i){
        int a,b;
        cin >> a >> b;
        distance.emplace_back(abs(b-a));
        arr.emplace_back(make_pair(a,b));
        if(abs(b-a) > max_length){
            max_length = abs(b-a);
            record_index = i;
        }
    }

    int compare_x = arr[record_index].first;
    int compare_y = arr[record_index].second;
    int compare_dist = distance[record_index];
    //cout<<compare_x<<" "<<compare_y<<" "<<compare_dist<<endl;

    for(int i = 0; i < n; ++i){
        if(compare_x > arr[i].first || compare_y < arr[i].second || compare_dist < distance[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<record_index+1<<endl;



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
