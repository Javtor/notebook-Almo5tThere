ll inv(ll a, ll mod) { //inverse of a modulo mod
	assert(gcd(a,mod)==1);
	pl sol = extendedEuclid(a,mod);
	return ((sol.fst%mod)+mod)%mod;
}
//Opcion 2
ll pm(ll a, ll e){
	ll r=1;
	while(e){
		if(e&1)r=(r*a)%MOD;
		e>>=1;a=(a*a)%MOD;
	}
	return r;
}
ll inv(ll a){return pm(a,MOD-2);}
// Opcion O(N)
ll INV[MAXN];
INV[1]=1;fore(i,2,MAXN) INV[i] = MOD-(ll)(MOD/i)*INV[MOD%i]%MOD;
// Fact Inv
ll FI[MAXN];
FI[0]=1; fore(I,1,MAXN)FI[i]=FI[i-1]*INV[i]%MOD;
