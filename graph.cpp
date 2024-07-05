

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

void dfs(vector<vll>& adj, vll& visited, ll start){
    visited[start] = 1;
    for(auto c:adj[start]){
        if(visited[c]) continue;
        dfs(adj,visited,c);
    }
}

void bfs(vector<vll>& adj, vll& visited){
    queue<ll> q;
    q.push(1);
    visited[1] = 0;
    while(!q.empty()){
        ll a=q.front();
        q.pop();
        for(ll child:adj[a]){
            if(visited[child]>=0) continue;
            visited[child] = visited[a]+1;
            q.push(child);
        }
    }
    return;
}

void sol(){
    ll n,m;
    i2(n,m);
    vector<vll> adj(n+1);
    vll visited(n+1,0);
    for(ll i = 0; i < m; i++) {
        ll a,b;
        i2(a,b);
        adj[a].pb(b);
        adj[b].pb(a);
    }

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
