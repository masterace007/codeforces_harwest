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
    cin >> a >> b >> c >> d;
    double misha = 0.0,vasya = 0.0;
    misha = max(3*a/10,a - (a*c/250));
    vasya = max(3*b/10,b - (b*d/250));
    //cout<<misha<<" "<<vasya<<endl;

    if(misha < vasya)
        cout<<"Vasya"<<endl;
    else if (misha > vasya)
        cout<<"Misha"<<endl;
    else
        cout<<"Tie"<<endl;
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