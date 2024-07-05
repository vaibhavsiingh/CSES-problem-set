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

bool dfs(vector<vll>& adj, vll& visited, ll start, bool firstTeam){
    visited[start] = firstTeam ? 1 : 2;
    for(auto c: adj[start]){
        if(visited[c]){
            if(visited[c] == visited[start]) return false;
        } else {
            if(!dfs(adj, visited, c, !firstTeam)) return false;
        }
    }
    return true;
}

void sol(){
    ll n, m;
    i2(n, m);
    vector<vll> adj(n + 1);
    vll visited(n + 1, 0);
    for(ll i = 0; i < m; i++) {
        ll a, b;
        i2(a, b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(ll i = 1; i <= n; i++) {
        if(!visited[i]){
            if(!dfs(adj, visited, i, true)){
                o1("IMPOSSIBLE");
                return;
            }
        }
    }
    for(ll i = 1; i <= n; i++) {
        cout << visited[i] << ' ';
    }
    cout << "\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
