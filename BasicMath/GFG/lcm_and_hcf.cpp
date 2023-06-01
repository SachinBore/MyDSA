#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

// Time complexity is O(log(min(a,b)))
// Space complexity is O(log(min(a,b)))

// wkt, lcm(a,b) = (a*b)/gcd(a,b)

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputmath.txt", "r", stdin);
	freopen("outputmath.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {

		int a, b; cin >> a >> b;
		cout << lcm(a, b) << endl;
		cout << gcd(a, b) << endl;
	}
	return 0;
}
