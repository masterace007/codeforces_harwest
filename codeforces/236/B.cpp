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
	vector<int> arr;
	int a,b,c;
	map<int,int> prod_map;
	cin >> a >> b >> c;
	arr.emplace_back(a);
	arr.emplace_back(b);
	arr.emplace_back(c);
	int sum = 0;
	for(int i = 1; i <= a ; ++i){
		int prod = 1;
		for(int j = 1; j <= b; ++j){
			for(int d = 1; d <= c; ++d) {
                prod = i * j * d;
                if(prod_map.find(prod) == prod_map.end())
                    prod_map.insert(make_pair(prod,1));
                else
                    prod_map[prod]++;
            }
		}
	}

	for(auto x : prod_map){
	    set<int> divisor_count;int occurrence = 0;
	    for(int i  = 1; i*i <= x.first; ++i){
	        if(x.first % i == 0){
	            divisor_count.insert(i);
	            divisor_count.insert(x.first/i);
	            occurrence = x.second;
	        }
	    }
	    sum += (occurrence*divisor_count.size());
	}

	cout<<sum<<endl;
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
