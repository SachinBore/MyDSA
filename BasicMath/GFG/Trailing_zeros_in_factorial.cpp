#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	if (n < 0) return -1;

	int cnt = 0;
	for (int i = 5; i <= n; i = i * 5) {
		cnt += (n / i);
	}
	return cnt;
}


// Time complexity is O(log(N))
// Space complexity is O(1)

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << solve(n) << endl;
	}
}