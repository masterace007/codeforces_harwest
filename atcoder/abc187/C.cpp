#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	int n;
	cin >> n;
	set <string> arr_normal;
	set <string> arr_exclamation;
	map<string,int> normal;

	for(int i = 0; i < n ; ++i){
		string str;
		cin >> str;
		if(str[0] == '!')
			arr_exclamation.insert(str);
		else
			arr_normal.insert(str);
	}
	vector <string> arr_new_normal;
	for(auto x: arr_exclamation){
		arr_new_normal.push_back(x);
	}
	for(auto x : arr_normal){
		if(normal.find(x) == normal.end())
			normal.insert(make_pair(x,1));
	}
	
	for(int i = 0; i < arr_new_normal.size() ; ++i)
		arr_new_normal[i] = arr_new_normal[i].substr(1);
	
	for(auto x : arr_new_normal){
		if(normal.find(x) == normal.end())
			normal.insert(make_pair(x,1));
		else
			++normal[x];
	}	
		
	for(auto x : normal){
		if(x.second % 2 == 0){
			cout<<x.first<<endl;
			return;
		}
	}
	cout<<"satisfiable"<<endl;
	
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}	