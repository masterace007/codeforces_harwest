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

void solve() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	int count_0 = 0;
	int count_5 = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] == 0)
			count_0++;
		else
			count_5++;
	}
	int sum_5 = count_5 * 5;
	while(sum_5 % 9 != 0 && count_5){
		count_5--;
		sum_5 = count_5 * 5;
	}
	if(count_5 > 0){
	    if(count_5 > 0 && count_0 > 0){
		    for(int i = 0; i < count_5; ++i)
			    cout<<5;
			for(int i = 0; i < count_0 ; ++i)
				cout<<0;
	    }

	    else if(count_0 <= 0){
	    	cout<<-1<<endl;
	    }
	    else{
	    	cout<<0<<endl;
	    }
		cout<<endl;
	}
	else if(count_0 > 0)
		cout<<0<<endl;
	else
		cout<<-1<<endl;


}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}