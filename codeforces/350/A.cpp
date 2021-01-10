#include<bits/stdc++.h>
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
	int n,m;
	cin >> n >> m;
	int correct[n],wrong[m];
	for(int i = 0; i < n; ++i)
		cin >> correct[i];
	for(int i = 0; i < m; ++i)
		cin >> wrong[i];
	sort(correct,correct+n);
	sort(wrong,wrong+m);
	if(correct[0] == correct[n-1]){
		if(correct[0]*2 < wrong[0])
			cout<<correct[0]*2<<endl;
		else
			cout<<-1<<endl;
	}
	else{
		int num = correct[0]*2;
		int tl = max(num,correct[n-1]);
		if( tl < wrong[0] && correct[n-1] < wrong[0]){
			cout<<tl<<endl;
		}
		else
			cout<<-1<<endl;

	}
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