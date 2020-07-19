//nCr mod m. n,c muy grandes, m <=3000
int c[m][m];
ll lucas(ll n, ll k){
    ll ans = 1;
    while(n+k){
        ans=(ans*C[n%m][k%m])%m;
        n/=m;k/=m;
    }
    return ans;
}