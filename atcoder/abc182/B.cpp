#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
        if (arr[i] > max) max = arr[i];
    }
    int max_gcd_count = 0;
    int record_max = 0;
    int i = 0;
    
    for(i=2; i <= max; ++i){
        int count  = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] % i ==0)
            count++;
        }
        if(count >= max_gcd_count){ max_gcd_count = count; record_max = i;}
    }
    cout<<record_max<<endl;
}