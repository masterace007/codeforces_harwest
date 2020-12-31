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
	vector<pair<int,int>> arr;
	int count_a_even = 0,count_a_odd = 0;
	int count_b_even = 0,count_b_odd = 0;
	int count_a_even_b_odd = 0, count_b_even_a_odd = 0;
	for(int i = 0; i < n ; ++i){
		int a,b;
		cin >> a >> b;
		arr.push_back(make_pair(a,b));
		if(a %2 == 0 && b%2 == 1)
			count_a_even_b_odd++;
		else if(a %2 == 1 && b%2 == 0 )
			count_b_even_a_odd++;

		if(a % 2 == 0)
			count_a_even++;
		else
			count_a_odd++;
		if(b % 2 == 0)
			count_b_even++;
		else
			count_b_odd++;
	}
	int count_steps = 0;
	if(count_a_odd % 2 == 1){
		if(count_b_even_a_odd > 0){
			count_b_even_a_odd--;
			count_a_even_b_odd++;
			count_a_even++;
			count_a_odd--;
			count_b_odd++;
			count_b_even--;
			if(count_b_odd % 2 == 1)
				count_steps = -1;
			else
				count_steps = 1;
		}
		else{
			count_steps = -1;
		}
		
	}
	if(count_b_odd % 2 == 1){
		if(count_a_even_b_odd > 0){
			count_a_even_b_odd--;
			count_b_even_a_odd++;
			count_b_even++;
			count_a_odd++;
			count_b_odd--;
			count_a_even--;
			if(count_a_odd % 2 == 1)
				count_steps = -1;
			else
				count_steps = 1;

		}
		else{
			count_steps = -1;
		}
	}
	cout<<count_steps<<endl;

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