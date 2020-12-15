#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin>>arr[i];
        
        int m = sizeof(arr)/sizeof(arr[0]);
        stable_sort(arr,arr+m);
        
        int magic_count = 0;
        int min  = arr[0];

        for(int i = 1; i < n ; ++i ){
            while((arr[i]+ min) <= k)
            {
                magic_count++;
                arr[i]+=min;
            }
        }
        
        while((arr[0] + arr[1]) <= k){
            magic_count++;
            arr[0]+=arr[1];
        }
        cout<<magic_count<<endl;
    }
}