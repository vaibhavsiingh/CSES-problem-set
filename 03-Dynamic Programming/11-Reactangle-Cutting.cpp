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
    ll a,b;
    i2(a,b);

    ll l = max(a,b);
    ll s = min(a,b);
    vector<ll> hehe(l+1,0);
    vector<vector<ll>> dp(l+1,hehe);
    for(ll i = 0; i <= l; i++) {
        dp[i][i]=0;
    }
    for(ll i=2; i<=l; i++){
        dp[i][1]=dp[i-1][1]+1;
    }
    for(ll i=2; i<=l; i++){
        dp[1][i]=dp[1][i-1]+1;
    }
    for(ll i = 2; i <= l; i++) {
        for(ll j=2; j<=l; j++){
            if(i==j) continue;
            ll mini1=1e18, k1=-1;
            for(ll k=1; k<i; k++){
                if(mini1 >dp[i-k][j]+dp[k][j]){
                    mini1=dp[i-k][j]+dp[k][j];
                    k1 = k;
                }
            }
            ll mini2=1e18,k2;
            for(ll k=1; k<j; k++){
                if(mini2>dp[i][j-k]+dp[i][k]){
                    mini2 = dp[i][j-k]+dp[i][k];
                    k2=k;
                }
            }
            if(mini1<mini2){
                dp[i][j] = dp[i-k1][j]+dp[k1][j]+1;
            }
            else{
                dp[i][j] = dp[i][j-k2]+dp[i][k2]+1;
            }
        }
    }
    o1(dp[l][s]);

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
