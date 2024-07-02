#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define sz size
#define reach cout << "Reached" << endl;
#define o1(a) cout << a << "\n"
#define o2(a, b) cout << a << ' ' << b << "\n";
#define iArray(a, n) for (ll i = 0; i < n; i++) cin >> a[i];
#define i2(a, b) cin >> a >> b;

const ll MOD = 1000000007;

ll fac(ll n){
    ll ans = 1;
    for(ll i = 2; i <= n; i++) {
        ans *= i%MOD;
        ans %= MOD;
    }
    return ans;
}

ll expo(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll temp = expo(a,b/2);
    ll ans = temp*temp%MOD;
    if(b%2==0) return ans;
    else return a*ans%MOD;
}

void sol(){
    ll n;
    cin >> n;
    if(n%2==1){
        o1(0);
        return;
    }
     n=n/2;
    ll invn1 = expo(n+1,MOD-2);
    ll nfacinv = expo(fac(n),MOD-2);
    ll ans = (invn1*fac(2*n)%MOD)*(nfacinv*nfacinv%MOD)%MOD;
    o1(ans);

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
