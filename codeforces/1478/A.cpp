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
	int n;
	cin >> n;
	vector<int> arr(n,0);
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	if(*min_element(all(arr)) == *max_element(all(arr)))
		cout<<n<<endl;
	else{
		map<int,int,greater<>> map_arr;
		for(int i = 0; i < n; ++i){
			if(map_arr.find(arr[i]) == map_arr.end())
				map_arr.insert(make_pair(arr[i],1));
			else
				map_arr[arr[i]]++;
		}
		int max_num = INT_MIN;
		for(auto x : map_arr)
			max_num = max(max_num,x.second);
		cout<<max_num<<endl;
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    fastio();
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
