#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i = 0; i < n; ++i)
            cin>>arr[i];
        ll b[n];
        int k = n -1;
        int i = 0;
        
        for(int j = 0; j < n; ++j){
            if(j %2 == 0)
                b[j] = arr[i++];
            else
                b[j] = arr[k--];
        }
        
        for(int i = 0; i < n; ++i)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
}