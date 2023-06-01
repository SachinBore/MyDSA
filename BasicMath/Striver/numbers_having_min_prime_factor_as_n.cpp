#include <bits/stdc++.h>
using namespace std;


int n = 1000000;
vector<int> sieve(n + 1, 1);
void createSieve() {
	for (int i = 2; i * i <= n; i++) {
		if (sieve[i] == 1) {
			for (int j = i * i; j <= n; j += i) {
				if (sieve[j] != 0) {
					sieve[i]++;
					sieve[j] = 0;
				}
			}
		}
	}
}

// Time complexity is O(Nlog(logN))
// Space complexity is O(N)


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	createSieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << sieve[n] << endl;
	}


}