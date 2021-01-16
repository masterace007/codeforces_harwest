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
    int64_t n,a,b;
    cin >> n >> a >> b;
    int64_t sum = (a+b);
    int64_t blue_balls = 0;
    if(n % sum == 0){
        blue_balls = (n/sum)*a;
    }
    else{
        int64_t num = n % sum;
        if(num <= a){
            int64_t temp = n/sum;
            int64_t quot = temp * a;
            blue_balls = quot + num;
        }
        else{
            int64_t temp = n/sum;
            int64_t quot = temp * a;
            blue_balls = quot + a;
        }
    }
    cout<<blue_balls<<endl;

    
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