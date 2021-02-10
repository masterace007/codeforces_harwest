#include "bits/stdc++.h"
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        int64_t
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

using namespace std;
using namespace chrono;	

void solve(){
	int b,k;
	cin >> b >> k;
	int arr[k+1];
	for(int i = 1; i < k+1; ++i)
		cin >> arr[i];
	set<int> arr_set;
	vector<int> power;
	for(int i = 1; i < k; ++i){
		int num = pow(b,i);
		int last = num%10;
		if(!arr_set.count(last)){
			arr_set.insert(last);
			power.emplace_back(last);
		}
		else
			break;
	}

	int sum = 0;
	int temp = 1;
	for(int i = k-1; i >= 1; --i){
		sum += (arr[temp] * power[i%arr_set.size()]);
		sum = sum % 10;
		temp++; 
	}
	sum += arr[k];
	if(sum % 2 == 0)
		cout<<"even"<<endl;
	else
		cout<<"odd"<<endl;
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