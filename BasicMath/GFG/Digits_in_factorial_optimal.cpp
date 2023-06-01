#include <bits/stdc++.h>
using namespace std;

// Time complexity is O(n)
// Space Complexity is O(1)
int solve(int n) {

	double res = 0;
	for (int i = 1; i <= n; i++) {
		res += log10(i);
	}
	res = floor(res) + 1;
	return res;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int testcase; cin >> testcase;
	while (testcase--) {
		int n; cin >> n;
		cout << solve(n) << endl;;
	}

}
