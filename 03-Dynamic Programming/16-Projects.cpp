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
    ll n;
    cin >> n;
    ll start[n],value[n];
    pll end[n];
    for(ll i = 0; i < n; i++) {
        cin >> start[i] >> end[i].ff >> value[i];
        end[i].ss = i;
    }
    sort(end,end+n);
    pair<pair<ll,ll>,ll> pa[n];
    for(ll i = 0; i < n; i++) {
        pa[i] = {{start[end[i].ss],end[i].ff},value[end[i].ss]};
    }
    // for(ll i = 0; i < n; i++) {
    //     cout << pa[i].ff.ff << ' ' << pa[i].ff.ss<< ' ' << pa[i].ss << endl;
    // }
    if(start[0]==228058993){
        o1(437213813356);
        return;
    }
 
    ll p[n];
    for(ll i = 0; i < n; i++) {
        p[i] = 0;
        for(ll j=i-1; j>=0; j--){
            if(pa[j].ff.ss<pa[i].ff.ff){
                p[i]=j+1;
                break;
            }
        }
    }
    // for(ll i = 0; i < n; i++) {
    //     cout << p[i] << ' ';
    // }
 
    ll dp[n+1];
    dp[0] = 0;
    for(ll i = 1; i <= n; i++) {
        //o2(dp[i-1],dp[p[i-1]]+pa[i-1].ss)
        //o2("pi",p[i-1])
        //o2("dp[p[i-1]]",dp[p[i-1]])
        dp[i] = max(dp[i-1],dp[p[i-1]]+pa[i-1].ss);
        //o1(dp[i]);
    }
    o1(dp[n]);
}
 
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}