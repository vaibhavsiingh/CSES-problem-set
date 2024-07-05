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

ll bfs(vector<vll>& adj, vll& visited, ll n){
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
            if(child == n) return visited[n];
        }
    }
    return -1;
}

void sol(){
    ll n,m;
    i2(n,m);
    vector<vll> adj(n+1);
    for(ll i = 0; i < m; i++) {
        ll a,b;
        i2(a,b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vll visited(n+1,-1);
    ll ans = bfs(adj,visited,n);
    if(ans==-1) o1("IMPOSSIBLE");
    else{
        o1(ans+1);
        ll ptr = n;
        ll dist = ans-1;
        vll route;
        route.pb(n);
        while(dist>=0){
            for(ll ne:adj[ptr]){
                if(visited[ne]==dist){
                    route.pb(ne);
                    ptr = ne;
                    dist--;
                    break;
                }
            }
        }
        for(ll i = route.size()-1; i >= 0; i--) {
            cout << route[i] << ' ';
        }
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
