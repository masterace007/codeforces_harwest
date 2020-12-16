#include <bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false);
#define fastio cin.tie(NULL);
#define pb push_back;
using namespace std;

int main() {
    ll t;
    ios;
    fastio;
    cin>>t;
    while(t--){
        ll n,t;
        cin>>n>>t;
        int arr[n];
        int count = 0;
        for(ll i = 0; i < n; ++i){
            cin>>arr[i];
            if(t %2 == 0 && arr[i] == t / 2){
                count++;
                cout<<count%2<<" ";
            }
            else if (arr[i] * 2 < t)
            cout<<"0 ";
            else
            cout<<"1 ";
        }
        cout<<"\n";
    }
}