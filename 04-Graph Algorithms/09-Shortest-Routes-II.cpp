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


void sol(){
    ll n,m,q;
    cin >> n >> m >> q;
    vector<vector<pll>> adj(n+1);
    vector<vll> distance(n+1,vll(n+1,1e18));
    for(ll i = 0; i < m; i++) {
        ll a,b,d;
        i2(a,b);
        cin >> d;
        adj[a].pb({b,d});
        adj[b].pb({a,d});
        distance[a][b] = min(d,distance[a][b]);
        distance[b][a] = min(d,distance[b][a]);
        // directed graph this
    }
    for(ll i = 1; i <= n; i++) {
        distance[i][i] = 0;
    }
    for(ll k = 1; k <= n; k++) {
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                distance[i][j] = min(distance[i][j],distance[i][k]+distance[k][j]);
            }
        }        
    }
    while(q--){
        ll a,b;
        cin >> a >> b;
        if(distance[a][b]<1e18) o1(distance[a][b]);
        else o1(-1);
    }



}


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
