#include <bits/stdc++.h>
using namespace std;

void sieve(int n) {
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			cout << i << " ";
			for (int j = i * i; j <= n; j = j + i) {
				isPrime[j] = false;
			}
		}
	}
}

// Time complexity is O(Nlog(logN))
// Space complexity is O(N)

// Question: Given a number n, print all primes till n.

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int n; cin >> n;
	sieve(n);
}