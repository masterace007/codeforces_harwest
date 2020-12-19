#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll h,w;
    cin>>h>>w;
    int arr[h][w];
    int max_num = INT_MAX;
    for(int i = 0; i < h; ++i){
    	for(int j = 0; j < w; j++){
    		cin>>arr[i][j];
    		if(arr[i][j] < max_num)
    			max_num = arr[i][j];
    	}
    }

    ll no_of_bricks_removed = 0;
    for(int i = 0; i < h; ++i){
    	for(int j = 0; j < w; ++j){
    		no_of_bricks_removed += (arr[i][j] - max_num);
    	}
    }
    cout<<no_of_bricks_removed<<"\n";
	return 0;
}