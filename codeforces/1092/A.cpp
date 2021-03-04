#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, k;
		cin >> n >> k;
		for (int j = 0; j < n; ++j) {
			cout << char('a' + j % k);
		}
		cout << endl;
	}
	
	return 0;
}