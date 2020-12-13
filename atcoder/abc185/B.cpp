#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n,m,t;
    long long a,b;
    cin>>n>>m>>t;
    long long before  = 0;
    long long battery_charge = n;
    for(long long i = 0; i < m;i++){
        cin>>a>>b;
        // cout<<a+before<<endl;
        if( a - before >= battery_charge){
            cout<<"No\n";
            return 0;
        }
        battery_charge -= (a - before);
        // cout<<battery_charge<<endl;
        battery_charge += (b-a);
        // cout<<battery_charge<<endl;
        battery_charge = min(n,battery_charge);
        // cout<<battery_charge<<" "<<endl;
        before = b;
    }
    // cout<<battery_charge<<endl;
    if(t - before >= battery_charge)
    cout<<"No\n";
    else
        cout<<"Yes\n";
    
}