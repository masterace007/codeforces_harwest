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
	int n,k;
	cin >> n >> k;
	string str;
	cin >> str;
	string temp = str;
	int record_front, record_back;
	for(int i = 0; i < n; ++i){
		if(temp[i] == '*'){
			temp[i] = 'x';
			record_front = i;
			break;
		}
	}
	reverse(all(str));
	for(int i = 0; i < n; ++i){
		if(str[i] == '*'){
			str[i] = 'x';
			break;
		}
	}
	reverse(all(str));
	int count = 2;
	if(str == temp){
		cout<<1<<endl;
		return;
	}
	
	for(int i = 0; i < n; ++i){
		if(str[i] == 'x')
			record_back = i;
	}

	if(record_back - record_front <= k){
		cout<<2<<endl;
		return;
	}
	else{
		for(int i = record_front ; i < record_back;){
			if(str[i+k] == '*' && i+k < record_back){
				str[i+k] = 'x';
				i += k;
				count++;
			}
			else if(i+k >= record_back){
				break;
			}
			else{
				for(int j = i+k; j >= i; --j){
					if(str[j] == '*'){
						str[j] = 'x';
						i = j;
						count++;
						break;
					}
				}
			}
		}
	}
	cout<<count<<endl;
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
	cin >> t;
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