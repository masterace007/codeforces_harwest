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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false;}

using namespace std;
using namespace chrono;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	int sum_a = 0,sum_b = 0;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		sum_a += a[i];
	}

	for(int i = 0; i < n; ++i){
		cin >> b[i];
		sum_b += b[i];
	}
	if(sum_a == sum_b && *max_element(all(a)) == *min_element(all(a)))
		cout<<-1<<endl;
	else if(sum_a > sum_b)
		cout<<1<<endl;
	else{
		bool flag = false;
		int count = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] != b[i] && a[i] == 1){
				flag = true;
				count++;
			}
		}
		if(!flag && sum_a <= sum_b)
			cout<<-1<<endl;
		else{
			int diff = sum_b - sum_a;
			int max_among = diff/count;
			sum_a += (count*max_among);
			if(sum_a > sum_b)
				cout<<1+max_among<<endl;
			else
				cout<<2+max_among<<endl;

		}
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