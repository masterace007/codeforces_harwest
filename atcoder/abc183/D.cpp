#include <bits/stdc++.h>
#define int long long int
const int N = 2*10e5;

using namespace std;

int32_t main() {
    int n,w;
    cin >> n >> w;
    vector <int> water_supply(N,0);
    for(int i = 0; i < n; ++i){
        int si,ti,pi;
        cin >> si >> ti >> pi;
        water_supply[si] += pi;
        water_supply[ti] -= pi;
    }
    for(int i = 1; i < N; ++i){
        water_supply[i] += water_supply[i-1];
        
    }
    for(int i = 0; i < N; ++i)
    if(water_supply[i] > w){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}