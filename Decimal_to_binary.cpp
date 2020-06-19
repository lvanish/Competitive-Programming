int decimal_to_binary(int n) {
	int ans = 0, p = 1;

	while (n > 0) {
		int last_bit = (n & 1);
		ans += last_bit * p;
		n = n >> 1;
		p = p * 10;
	}
	return ans;
}
