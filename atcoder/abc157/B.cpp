#include "bits/stdc++.h"
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
    int arr[3][3];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            cin >> arr[i][j];
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        int a;cin >> a;
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                if(arr[j][k] == a){
                    arr[j][k] = 1;
                    break;
                }
            }
        }
    }
    

    bool flag;
    for(int i = 0; i < 3; ++i){
        flag = true;
        for(int j = 0; j < 3; ++j){
            if(arr[i][j] != 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
            return;
        }
    }
    
    

    for(int i = 0; i < 3; ++i){
        flag = true;
        for(int j = 0; j < 3; ++j){
            if(arr[j][i] != 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
            return;
        }
    }
    
    
    flag = true;
    for(int i = 0 ; i < 3; ++i){
        if(arr[i][i] != 1){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
        return;
    }
    
    flag = true;
    for(int i = 0,j = 2 ; i < 3; ++i,--j ){
        if(arr[i][j] != 1){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}

int32_t main() {
	FASTIO; 
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