#include <bits/stdc++.h>
using namespace std;

// SPOJ Question
// TDKPRIME - Finding the Kth prime

// By brute force method, we found that 5*10^6th prime lies at this number
int n = 86028121;
vector<bool> sieve(n + 1, true);
vector<int> ds;

void createSieve()
{
	for (int i = 2; i * i <= n; i++) {
		if (sieve[i] == true) {
			for (int j = i * i; j <= n; j = j + i) {
				sieve[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (sieve[i] == true) {
			ds.push_back(i);
		}
	}
}

// Time complexity is O(nloglogn)
// Space complexity is O(n)

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif
	createSieve();
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		cout << ds[k - 1] << endl;
	}
}
