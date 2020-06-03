int binary_to_decimal(string s) {
	string str = s;

	int n = str.length();
	int ans = 0;

	int p = 1;

	for (int i = n - 1; i >= 0; i--) {
		if (str[i] == '1')
			ans += p;
		p *= 2;
	}
	return ans;
