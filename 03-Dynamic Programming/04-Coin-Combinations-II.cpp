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

const ll MOD = 1000000007;

void sol(){
    ll n,x;
    i2(n,x);
    ll a[n];
    iArray(a,n);

    vector<ll> dp(x+1,0);
    dp[0]= 1;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<=x; j++){
            if(j-a[i]>=0){
                dp[j] += dp[j-a[i]];
                dp[j] %= MOD;
            }
        }
    }
    o1(dp[x]);
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
