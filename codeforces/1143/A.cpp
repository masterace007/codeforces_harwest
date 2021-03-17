#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
using namespace std;
const ll INF = 1e18 + 5;
const ll MOD = 1e9 + 7;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

ll gcd(ll a, ll b) {
	return (b==0) ? a : gcd(b, a%b);
}

int main()
{
	#ifndef ONLINE_JUDGE
	fio
	#endif
	fast
	ll tc=1;
	// cin >> tc;
	while(tc--) {
		ll n;
		cin >> n;
		vector<ll> a(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		ll i1, i0;
		for(int i=0; i<n; i++) {
			if(a[i]==1)
				i1 = i+1;
			else
				i0 = i+1;
		}
		cout << min(i0, i1) << '\n';
	}

	return 0;
}
