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
	if(n % 4 != 0){
		cout<<"==="<<endl;
		return;
	}
	string str;
	cin >> str;
	map<char,int> arr;
	int count = 0;
	for(char i: str){
		arr[i]++;
		if(isalpha(i))
			count++;
	}
	count = n-count;
	int temp = n/4;
	int check = 0;
	for(auto x : arr){
		if(x.first == '?')
			continue;
		if(x.second > temp){
			cout<<"===";
			return;
		}
		else{
			if(count < 0){
				cout<<"==="<<endl;
				return;
			}
			check = temp - x.second;
			count -= check;
		}
	}
	for(int i = 0 ; i < n; ++i){
		if(str[i] == '?'){
			if(temp - arr['A'] > 0){
				cout<<'A';
				arr['A']++;
			}
			else if(temp - arr['G'] > 0){
				cout<<"G";
				arr['G']++;
			}
			else if(temp - arr['C'] > 0){
				cout<<'C';
				arr['C']++;
			}
			else if(temp - arr['T'] > 0){
				cout<<"T";
				arr['T']++;
			}

		}
		else
			cout<<str[i];
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