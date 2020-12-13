#include <iostream>

using namespace std;

int main() {
    int str_len,x;
    string str;
    cin>>str_len>>x;
    int count= x;
    cin>>str;
    for(int i = 0; i < str_len; ++i)
    if(str[i] == 'x'){
        if(count > 0 )
        count--;
    }
    else{
        count++;
    }
    cout<<count<<"\n";
}