#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	if (n <= 1) return;

	while (n % 2 == 0) {
		cout << 2 << endl;
		n = n / 2;
	}

	while (n % 3 == 0) {
		cout << 3 << endl;
		n = n / 3;
	}

	for (int i = 5; i * i <= n; i = i + 6) {
		while (n % i == 0) {
			cout << i << endl;
			n = n / i;
		}

		while (n % (i + 2) == 0) {
			cout << (i + 2) << endl;
			n = n / (i + 2);
		}
	}
	if (n > 3) cout << n << endl;
}

// Time complexity is O(sqrt(N))
// Space complexity is O(1)

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int n; cin >> n;
	solve(n);
}