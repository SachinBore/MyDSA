#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n == 1) return false;

	if (n == 2 || n == 3) return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i = i + 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

// more optimised for larger numbers

// Time complexity is O(sqrt(N))
// Space complexity is O(1)

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (isPrime(n)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}