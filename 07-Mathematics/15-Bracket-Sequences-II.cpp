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

ll fac(ll n) {
    ll ans = 1;
    for (ll i = 2; i <= n; i++) {
        ans = (ans * i) % MOD;
    }
    return ans;
}

ll expo(ll a, ll b) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

ll C(ll n, ll k){
    if(n==0) return 1;
    if(n==1) return k+1;
    ll inv1 = expo(n,MOD-2);
    ll inv2 = expo(n+k+1,MOD-2);
    ll ans = (((2*n+k-1)*(2*n+k)%MOD)*(inv1*inv2%MOD)%MOD)*C(n-1,k)%MOD;
    return ans;
}

void sol() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    ll open = 0;
    for (char c : s) {
        if (c == '(') open++;
        else open--;
        if(open<0) {
                    o1(0);
        return;
        }
    }
    
    n = (n - s.size() - open);
    if(n%2==1){
        o1(0);
        return;
    }
    if (n < 0) {
        o1(0);
        return;
    }
    o1(C(n/2,open));

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
    return 0;
}
