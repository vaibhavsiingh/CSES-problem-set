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
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rep0(i, n) for (int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define YN(possible) cout << ((possible) ? "Yes" : "No") << endl;

const ll MOD = 1000000007;
const ll INF = 1e18;

void sol(){
    ll n;
    cin >> n;
    vector<vector<char>> grid;
    for(ll i = 0; i < n; i++) {
        for(ll j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    priority_queue<pair<string,ll>, vector<pair<string,ll>>, greater<pair<string,ll>>> pq;
    vector<vector<string>> dp(n,vector<string>(n));
    dp[0][0] = "A";
    pq.push({"A",0});
    vector<vector<ll>> visited;
    visited[i][j]
    while(!pq.empty()){
        auto [curr_str,nd] = pq.top();
        pq.pop();
        ll x = nd/n, y = nd%n;
        if(x+1<n){
               
        }
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}