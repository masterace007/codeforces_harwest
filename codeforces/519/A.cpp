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
char arr[8][8];

void solve(){
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j < 8; ++j)
			cin >> arr[i][j];
	}

	int count_a = 0, count_b = 0;
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j < 8; ++j){
			if(isalpha(arr[i][j])){
				if(islower(arr[i][j])){
					if(arr[i][j] == 'q')
						count_a += 9;
					else if(arr[i][j] == 'r')
						count_a += 5;
					else if(arr[i][j] == 'b')
						count_a += 3;
					else if(arr[i][j] == 'n')
						count_a += 3;
					else if(arr[i][j] == 'p')
						count_a += 1;

				}
				else{
					if(arr[i][j] == 'Q')
						count_b += 9;
					else if(arr[i][j] == 'R')
						count_b += 5;
					else if(arr[i][j] == 'B')
						count_b += 3;
					else if(arr[i][j] == 'N')
						count_b += 3;
					else if(arr[i][j] == 'P')
						count_b += 1;
				}
			}
		}
	}
	if(count_a > count_b)
		cout<<"Black"<<endl;
	else if(count_b > count_a)
		cout<<"White"<<endl;
	else
		cout<<"Draw"<<endl;
	
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