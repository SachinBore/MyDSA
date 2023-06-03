#include <bits/stdc++.h>
using namespace std;

// spf -> smallest prime factors
int n = 1000000;
vector<int> spf(n + 1);

void createSieve() {
	for (int i = 1; i <= n; i++) {
		spf[i] = i;
	}

	for (int i = 2; i * i <= n; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j <= n; j += i) {
				if (spf[j] == j) spf[j] = i;
			}
		}
	}
}

// Question: Given t testcases, for each testcase given n,
// find the prime factorisation of n

// testcases-> 10^6
// n -> 10^6

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif
	// creating prime factorisation array -> O(Nlog(logN))
	createSieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		// printing prime factorisation -> O(log N)
		while (n != 1) {
			cout << spf[n] << " ";
			n = n / spf[n];
		}
		cout << endl;
	}
}
