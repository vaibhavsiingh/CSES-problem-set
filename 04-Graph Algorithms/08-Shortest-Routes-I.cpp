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

void Dijkstra(vector<vector<pll>> adj, vll& distance, ll start ){
    vll processed(distance.size(),0);
    distance[start] = 0;
    priority_queue<pair<ll,ll>> q;
    q.push({0,start});
    while(!q.empty()){
        ll node = q.top().ss;q.pop();
        if(processed[node]==1) continue;
        processed[node] = 1;
       for(pll child:adj[node]){
            ll b = child.ff, w=child.ss;
            if(distance[b]>distance[node]+w){
                distance[b]=distance[node]+w;
                q.push({-distance[b],b});
            }
        }
    }

}

void sol(){
    ll n,m;
    i2(n,m);
    vector<vector<pll>> adj(n+1);
    for(ll i = 0; i < m; i++) {
        ll a,b,d;
        i2(a,b);
        cin >> d;
        adj[a].pb({b,d});
        // directed graph this
    }
    
    vll distance(n+1,1e18);
    
    Dijkstra(adj,distance,1);
    
    
    for(ll i = 1; i <= n; i++) {
        cout << distance[i] << ' ';
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
