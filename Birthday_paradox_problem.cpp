

//-----------------BIRTHDAY PARADOX PROBLEM-----------------------

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
#define MOD (1000)*(1000)*(1000)+7



int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("prac_input.txt", "r", stdin);
	freopen("prac_output.txt", "w", stdout);
#endif


	double x = 1.0;

	int people = 0;

	double numerator = 365;
	double denominator = 365;

	double p;
	cin >> p;

	while (x > 1 - p) {
		x = x * (numerator / denominator);
		numerator--;
		people++;
	}

	cout << people;



	return 0;

}
