#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n ; ++i)
        cin >> arr[i];
    sort(arr,arr+n);
    int count_num = 0;
    int num = arr[k-1];
    int index_record = 0;
    for(int i = 0;i < n ; ++i)
        if(num == arr[i]){
            count_num++;
            index_record = i;
        }
            
    if(index_record > k-1){
        if(k == 0){
            int num = arr[0];
            if(arr[0] > 1){
                num -= 1;
                cout<<num<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
        }
        else
        cout<<"-1"<<endl;
    }
    else
        cout<<num<<endl;
}