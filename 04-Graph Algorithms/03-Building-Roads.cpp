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

void dfs(vector<vll>& adj, ll& count, vll& visited, ll start){
    visited[start] = 1;
    count++;
    for(auto c:adj[start]){
        if(visited[c]) continue;
        dfs(adj,count,visited,c);
    }
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
    ll nCom = 0, count=0;
    vll visited(n+1,0), join;
    ll ptr = 1;
    while(count<n){
        while(visited[ptr]==1 && ptr <=n) ptr++;
        join.pb(ptr);
        nCom++;
        dfs(adj,count,visited,ptr);
        //o2("back",count);
    }
    o1(nCom-1);
    for(ll i = 0; i < nCom-1; i++) {
        o2(join[i], join[i+1]);
    }
    

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
