#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n == 1) return false;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

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