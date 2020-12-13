#include <iostream>
using namespace std;
int main(){
	long long int a,b,c,d;
	cin>>a>>b;
  	cin>>c>>d;
  	int ans = 3;
  	long r1 = c - a;
  	long r2 = d - b;
  	if(!r1 && !r2)ans = 0;
  	else if((r1 == r2) || (r1 == -r2) || (abs(r1) + abs(r2) <=3)) ans=1;
    else if((r1 ^ r2 ^ 1) & 1 || abs(r1) + abs(r2) <= 6 ||  abs(r1 + r2) <= 3 || abs(r1 - r2) <= 3) ans = 2;\
    cout<<ans<<endl;
}