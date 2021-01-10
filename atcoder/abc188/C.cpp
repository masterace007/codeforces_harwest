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
	int n;
	cin >> n;
	int num =(int) pow(2,n);

	int arr[num] = {0};
	int cheat_arr[num];
	int main_number[2];
	
	for(int i = 0; i < num; ++i){
		cin >> arr[i];
		cheat_arr[i] = arr[i];
	}
	
	int div = num/2;
	int arr_1[div];
	sort(arr,arr+div,greater<int>());
	main_number[0] = arr[0];
	sort(arr+div,arr+num,greater<int>());
	main_number[1] = arr[div];

	int mn_ = min(main_number[0],main_number[1]);
	for(int i = 0; i < num; ++i)
		if(cheat_arr[i] == mn_){
			cout<<i+1<<endl;
			return;
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