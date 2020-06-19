#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fib(ll n, ll dp[]){

    if(n == 0 or n == 1){
        return n;
    }

    if(dp[n] != 0){
        return dp[n];
    }
    ll ans;

    ans = fib(n-1, dp) + fib(n-2, dp);
    return dp[n] = ans;

}


int main() {

	int t; cin>>t;
	while(t--){

        ll n;
        cin>>n;
        ll dp[1000001] = {0};
        cout<<fib(n, dp);

	}

	return 0;
}
