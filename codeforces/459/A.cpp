#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;

	// subtracting abs(x1) - abs(x2) or abs(y1) - abs(y2) if equal to zero then side
	// else diagonals are given

	if(abs(x1 - x2) == 0 && abs(y1 - y2) > 0 ){
		//sides are given
		int side_length = abs(y1 - y2);
		int x3,x4;
		int y3,y4;
		y3 = y1;
		if(x1 < 0){
		    x3 = abs(x1) + side_length;
		    x3 *= -1;
		}
		else{
		    x3 = x1 + side_length;
		}
		y4 = y2;
		if(x1 < 0){
		    x4  = abs(x2) + side_length;
		    x4 *= -1;
		}
		else{
		    x4 = x2 + side_length;
		}
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;


	}
	else if(abs(y1 - y2) == 0 && abs(x1 - x2) > 0 ){
		int side_length = abs(x1 - x2);
		int y3,y4;
		int x3,x4;
		x3 = x1;
		if( y1 < 0){
		    y3 = abs(y1) + side_length;
		    y3 *= -1;
		}
		else{
		    y3 = abs(y1) + side_length;
		}
		x4 = x2;
		if(y2 < 0){
		    y4 = abs(y2) + side_length;
		    y4 *= -1;
		    
		}
		else{
		    y4 = y2 + side_length;
		}
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

	}
	else{

			int x3,x4;
			int y3,y4;
			x3 = x2;
			y3 = y1;
			x4 = x1;
			y4 = y2;
			if(abs(x3 - x1) == abs(y3 - y2))
			    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
			else
			    cout<<-1<<endl;
	}

}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}