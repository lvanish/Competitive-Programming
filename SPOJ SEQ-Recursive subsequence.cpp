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
#define MOD 1000000000
 
vector<int> a, b, c;
int k;
 
vector<vector<int> > multiply(vector<vector<int> > A, vector<vector<int> > B) {
 
	vector<vector<int> > C(k + 1, vector<int> (k + 1));
 
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			for (int x = 1; x <= k; x++) {
				C[i][j] = ( C[i][j] + ( A[i][x] * B[x][j] ) % MOD ) % MOD;
			}
		}
	}
	return C;
}
 
 
 
vector<vector<int> > pow_fn(vector<vector<int> > A, int p) {
 
	if (p == 1) {
		return A;
	}
 
	if (p & 1) {
		return multiply(A, pow_fn(A, p - 1));
	}
 
	vector<vector<int> > X = pow_fn(A, p / 2);
	return multiply(X, X);
}
 
 
 
int solve(int n) {
	if (n == 0) {
		return 0;
	}
 
	if (n <= k) {
		return b[n - 1];
	}
 
	//mat expo
 
	vector<int> F1(k + 1);
 
	for (int i = 1; i <= k; i++) {
		F1[i] = b[i - 1];
	}
 
	// trans matrix
	vector<vector<int> > T(k + 1, vector<int>(k + 1));
 
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			if (i < k) {
				if (j == i + 1)
					T[i][j] = 1;
				else
					T[i][j] = 0;
			}
			else {
				T[i][j] = c[k - j];
			}
		}
	}
 
	T = pow_fn(T, n - 1);
 
	int res = 0;
 
	for (int i = 1; i <= k; i++) {
		res = ( res + ( T[1][i] * F1[i] ) % MOD ) % MOD;
	}
 
	return res;
 
}
 
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
 
	int t, n, no;
	cin >> t;
 
	while (t--) {
 
		cin >> k;
 
		for (int i = 0; i < k; ++i)
		{
			cin >> no;
			b.push_back(no);
		}
 
		for (int i = 0; i < k; ++i)
		{
			cin >> no;
			c.push_back(no);
		}
 
		cin >> n;
 
		cout << solve(n);
 
		cout << endl;
 
		b.clear();
		c.clear();
 
	}
 
 
	return 0;
} 
