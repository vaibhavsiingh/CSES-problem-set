#include<bits/stdc++.h>
using namespace std;typedef int64_t ll;typedef vector<ll> vll;typedef pair<ll,ll> pll;
#define pb push_back
#define pob pop_back
#define ff first				
#define ss second 
#define sz size	
#define reach cout<<"Reached"<<endl; 
#define o1(a) cout<<a<<"\n"
#define o2(a,b) cout << a << ' ' << b << "\n"; 
#define iArray(a,n) for(ll i=0; i<n; i++) cin >> a[i]; 
#define i2(a,b) cin >> a >> b;

void sol(){
    ll n,m;
    i2(n,m);
    ll a[n];
    iArray(a,n);
    ll md = 1000000007;
    vector<ll> v(m+2,0);
    vector<vector<ll>> dp(n,v );
    if(a[0]!=0){
        dp[0][a[0]] = 1;
    }
    else{
        for(ll i = 1; i <=m; i++) {
            dp[0][i] = 1;
        }
    }
    for(ll i = 1; i < n; i++) {
        if(a[i]==0){
            for(ll j=1; j<=m; j++){
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j] + dp[i-1][j+1])%md; 
            }
        }
        else{
            dp[i][a[i]] = (dp[i-1][a[i]-1] + dp[i-1][a[i]]+dp[i-1][a[i]+1])%md;
        }
    }
    if(a[n-1]==0){
        ll sum = 0;
        for(ll i=1; i<=m; i++){
            sum+=dp[n-1][i];
            sum %= md;
        }
        o1(sum);
    }
    else{
        o1(dp[n-1][a[n-1]]);
    }
    // for(ll i = 0; i < 10; i++) {
    //     for(ll j=1; j<=3; j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
