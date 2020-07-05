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
const int mxN = 1e6 + 500;

int a[mxN];

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void seive() {

	b.set();

	b[0] = b[1] = 0;

	for (int i = 2; i <= n; i++) {
		if (b[i]) {
			primes.push_back(i);
			for (int j = i * i; j <= n; j += i) {
				b[i] = 0;
			}
		}
	}
}

bool check_prime(int no) {
	if (no <= n) {
		return b[no] == 1 ? true : false;
	}

	for (int i = 0; primes[i]*primes[i] <= no; i++) {
		if (no % primes[i] == 0) {
			return false;
		}
	}
	return true;
}


// taskkill -im A.exe -f
int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	seive();

	int n; cin >> n;

	if (check_prime(n))
		cout << "yes";
	else
		cout << "no";


	return 0;

}
