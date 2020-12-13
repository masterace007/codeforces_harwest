#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int num = min(a,min(b,min(c,d)));
    cout<<num<<endl;
}