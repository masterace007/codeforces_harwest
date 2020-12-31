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
	string str;
	cin >> str;
    vector <string> arr;
	string str_new = "";
	for(int i = 0; i < str.length(); ){
		if(str[i] =='W'){
			if(str[i+1] == 'U'){
				if(str[i+2] == 'B'){
					if(str_new != "")
						arr.push_back(str_new);
					str_new = "";
					i += 3;
				}
				else{
				    str_new += str[i];
				    str_new += str[i+1];
					i += 2;
				}
			}
			else{
			    str_new += str[i];
				i++;
			}
		}
		else{
			str_new += str[i];
			i++;
		}
	}
	if(str_new != "")
	    arr.push_back(str_new);
	for(int i = 0; i < arr.size();i++)
	    cout<<arr[i]<<" ";
	cout<<endl;
	
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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