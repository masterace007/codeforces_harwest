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
	int arr[3][3];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j){
            cin >> arr[i][j];
            if(arr[i][j] % 2 == 1)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }

    int light[3][3];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            light[i][j] = 1;


    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j){
            if(arr[i][j] == 1){
                if(light[i][j])
                    light[i][j] = 0;
                else
                    light[i][j] = 1;
                if(i+1 < 3){
                    if(light[i+1][j])
                        light[i+1][j] = 0;
                    else
                        light[i+1][j] = 1;
                }
                if(j+1 < 3){
                    if(light[i][j+1])
                        light[i][j+1] = 0;
                    else
                        light[i][j+1] = 1;
                }
                if(j-1 > -1){
                    if(light[i][j-1])
                        light[i][j-1] = 0;
                    else
                        light[i][j-1] = 1;
                }
                if(i-1 > -1){
                    if(light[i-1][j])
                        light[i-1][j] = 0;
                    else
                        light[i-1][j] = 1;
                }

            }
        }


    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3 ; ++j)
            cout<<light[i][j];
        cout<<endl;
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