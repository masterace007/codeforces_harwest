#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,w;
    cin>>n>>w;
    ll no_of_bricks_loaded = n / w;
    cout<<no_of_bricks_loaded<<"\n";
	return 0;
}