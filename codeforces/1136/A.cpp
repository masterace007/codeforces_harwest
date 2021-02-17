#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n; cin>>n;
   int a[n],b[n];
   for(int i=1;i<=n;i++){cin>>a[i]>>b[i];}
   int k; cin>>k;
   int pos=-1;
   for(int i=1;i<=n;i++){
    if(a[i]<=k&&b[i]>=k){pos=i; break;}
   }
   cout<<n-pos+1;
}

