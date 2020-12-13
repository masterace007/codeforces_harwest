#include <iostream>
using namespace std;
int main(){
	long long a,b,c;
  	cin>>a>>b>>c;
  	long long d = c - a -b;
  	if(d > 0 && d*d > 4*a*b)
      cout<<"Yes\n";
  	else
      cout<<"No\n";
}