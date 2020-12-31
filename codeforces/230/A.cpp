    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main(int argc, char const *argv[])
    {
    	ll s,n;
    	cin>>s>>n;
    	vector < pair<int,int> > vect;
    	for(int i = 0; i < n; i++){
    		int a,b;
    		cin>>a>>b;
    		vect.push_back( make_pair (a,b));
    	}
    	stable_sort(vect.begin(),vect.end());
     
    	for(int i = 0; i < n; ++i){
    		if(s > vect[i].first)
    			s += vect[i].second;
    		else{
    			cout<<"NO\n";
    			return 0;
    		}
    	}
    	cout<<"YES";
    	return 0;
    }