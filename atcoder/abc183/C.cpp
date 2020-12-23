#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    long long int n,k;
    cin>>n>>k;
    int arr[n+1][n+1];
    for(long long int i = 1; i <= n; ++i){
        for(ll j = 1; j <= n ; ++j){
                cin>>arr[i][j];
        }
    }
    vector <ll> cost;
    for(ll i = 2 ; i <= n ; ++i)
        cost.push_back(i);
    ll ans = 0;
        
    do{
        ll cost_price = 0;
        ll curr = 1;
        for(ll x : cost){
            cost_price += arr[curr][x];
            curr = x;
        }
        cost_price += arr[cost.back()][1];
        
        if(cost_price == k)
            ans++;
        
    }while(next_permutation(cost.begin(),cost.end()));
    
    cout<<ans<<endl;
    
}