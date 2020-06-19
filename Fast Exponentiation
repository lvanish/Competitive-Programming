//-------fast exponentiation--------
#define ll long long
#define MOD (100)*(100)*(100)+7
ll fastpower(ll a,ll b){  
	a%=MOD;       
	ll result=1;
	while(b>0){
		if(b%2){
			result*=a;
			result%=MOD;
		}
		a*=a;
		a%=MOD;
		b/=2;
	}
	return result;
}

