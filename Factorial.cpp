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
//int a[mxN];


void multiply(int *a, int &n, int num) {

	int carry = 0;

	for (int i = 0; i < n; i++) {
		int product = a[i] * num + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	while (carry) {

		a[n] = carry % 10;
		carry = carry / 10;
		n++;

	}

}


void ans(int no) {
	int *a = new int[10000];
	for (int i = 0; i < 1000; i++) {
		a[i] = 0;
	}
	a[0] = 1;
	int n = 1;

	for (int i = 2; i <= no; i++) {
		multiply(a, n, i);
	}
	//print values

	for (int i = n - 1; i >= 0; i--) {
		cout << a[i];
	}

	delete [] a;
	return;

}

// taskkill -im D.exe -f
int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;

	while (t--) {

		int n;
		cin >> n;

		ans(n);

		cout << endl;
	}


	return 0;

}
