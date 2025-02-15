#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef complex<ll> P;

#define X real()
#define Y imag()
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
#define oArray(a,n) for(ll i=0; i<n; i++) cout << a[i] << ' '; cout << endl;

const ll MOD = 1000000007;

void sol(){
    ll n,k;
    i2(n,k);
    vector<pll> v(n);
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v[i] = {x,i};
    }
    sort(v.begin(),v.end());
    ll p1=0,p2=n-1;
    while(p1<p2){
        if(v[p1].ff+v[p2].ff==k){
            o2(v[p1].ss+1,1+v[p2].ss);
            return;
        }
        if(v[p1].ff+v[p2].ff<k){
            p1++;
        }
        else p2--;

    }
    o1("IMPOSSIBLE");
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}