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
#define oArray(a, n) for (ll i = 0; i < n; i++) cout << a[i] << ' ';cout << endl;

const ll MOD = 1000000007;

void sol(){
    ll n,q;
    i2(n,q);
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ndash = log2(n)+1;
    n = 1<<ndash;
    while(v.size()<n){
        v.pb(0);
       // o1("1");
    }
    ll tree[2*n];
    
    for(ll i=2*n-1; i>=n; i--){
        tree[i] = v[i-n];
       // o1("2");
    }
    for(ll i=n-1; i>=1; i--){
        tree[i] = min(tree[2*i],tree[2*i+1]);
        //o1("3");
    }
    for(ll i = 0; i < q; i++) {
        ll a,b,c;
        cin >> a >> b >> c;
        //o1("4");
        if(a==1){
            --b;
            b+=n;
            tree[b] = c;
            for(b/=2;b>=1;b/=2){
                tree[b] = min(tree[2*b],tree[2*b+1]);
               // o1("5");
            }
        }
        else{
            --b;--c;
            b+=n;c+=n;
            ll ans =1e18;
            while(b<=c){
                if(b%2==1) ans=min(ans,tree[b++]);
                if(c%2==0) ans=min(ans,tree[c--]);
                b/=2;c/=2;
                //o1("6");
            }
            o1(ans);
        }
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
