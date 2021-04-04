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
	int n;
	cin >> n;
	string str;
	cin >> str;

	if(n == 1 && str == "1")
		cout<<"Yes"<<endl;
	else if(n == 1 && str == "0")
		cout<<"No"<<endl;
	else if(n == 2){
		if(str == "00" || str == "11")
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	else{
		vector<int> arr;
		for(int i = 0; i < n; ++i){
			if(str[i] == '1')
				arr.emplace_back(i);
		}

		if(arr.size() == 0)
			cout<<"No"<<endl;
		else if(arr.size() == 1 && n == 3 && arr[0] == 1)
			cout<<"Yes"<<endl;
		else if(arr.size() == 1)
			cout<<"No"<<endl;
		else if(str.find("000") != string::npos)
			cout<<"No"<<endl;
		else{
			for(int i = 0; i < arr.size() - 1; ++i){
				int temp = arr[i+1] - arr[i] - 1;
				if(temp != 2 && temp != 1){
					cout<<"No"<<endl;
					return;
				}
			}
			if(str[n-2] == '0' && str[n-1] == '0')
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;
		}
	}
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
	// cin >> t;
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