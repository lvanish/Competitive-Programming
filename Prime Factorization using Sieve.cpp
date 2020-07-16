#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;

#define int long long
#define endl "\n"
#define MOD 1000000007
#define pb push_back
const int mxN = 1e6 + 500;

int a[mxN];

vector<int> primesieve(int *p, int n) {
	p[0] = p[1] = 0;
	p[2] = 1;

	for (int i = 3; i <= n; i += 2) {
		p[i] = 1;
	}

	for (int i = 3; i <= n; i += 2) {
		if (p[i]) {
			for (int j = i * i; j <= n; j += 2 * i) {
				p[j] = 0;
			}
		}
	}

	vector<int> primes;

	primes.push_back(2);

	for (int i = 3; i <= n; i += 2) {
		if (p[i] == 1) {
			primes.push_back(i);
		}
	}

	return primes;
}


vector<int> factorize(int m, vector<int> &primes) {
	vector<int> factors;
	factors.clear();

	int i = 0;
	int p = primes[0];

	while (p * p <= m) {
		if (m % p == 0) {
			factors.push_back(p);
			while (m % p == 0) {
				m /= p;
			}
		}

		i++;
		p = primes[i];
	}
	if (m != 1) {
		factors.push_back(m);
	}

	return factors;
}




// taskkill -im E.exe -f
int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int N = 100000;
	int p[N];
	for (int i = 0; i < N; i++) {
		p[i] = 0;
	}

	vector<int> primes = primesieve(p, 10000);


	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		vector<int> factors = factorize(n, primes);

		for (auto x : factors) {
			cout << x << " ";
		}

		cout << endl;
	}


	return 0;

}
