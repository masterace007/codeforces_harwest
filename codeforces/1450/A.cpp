#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for(int i =0; i < str.length() ; ++i )
        if(str[i] == 'b')
        count++;
    for(int i = 0; i < count; ++i)
    cout<<'b';
    for(int i = 0; i < str.length(); ++i)
    if(str[i] != 'b')
    cout<<str[i];
    cout<<endl;
    }
}