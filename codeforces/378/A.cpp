#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;


void solve() {
	int a,b;
	cin >> a >> b;
	int win = 0,loss = 0, draw = 0;
	if(a == b){
		cout<<0<<" "<<6<<" "<<0<<endl;
		return;
	}

	if( abs(1-a) < abs(1 - b))
		win++;
	else if(abs(1-a) ==  abs(1-b))
		draw++;
	else
		loss++;

	if( abs(2-a) < abs(2 - b))
		win++;
	else if(abs(2-a) ==  abs(2-b))
		draw++;
	else
		loss++;

	if( abs(3-a) < abs(3 - b))
		win++;
	else if(abs(3-a) ==  abs(3-b))
		draw++;
	else
		loss++;

	if( abs(4-a) < abs(4 - b))
		win++;
	else if(abs(4-a) ==  abs(4-b))
		draw++;
	else
		loss++;

	if( abs(5-a) < abs(5 - b))
		win++;
	else if(abs(5-a) ==  abs(5-b))
		draw++;
	else
		loss++;

	if( abs(6-a) < abs(6- b))
		win++;
	else if(abs(6-a) ==  abs(6-b))
		draw++;
	else
		loss++;


	cout<<win<<" "<<draw<<" "<<loss<<endl;


}

signed main() {
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