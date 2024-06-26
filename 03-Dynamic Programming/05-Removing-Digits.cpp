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
    ll n;
    cin >> n;
    vector<ll> dp(n+1,1e12);
    dp[0] = 0;
    for(ll i=1; i<=9; i++) dp[i]=1;
    for(ll i = 10; i <= n; i++) {
        ll tens = 1;
        while(tens<=i){
            ll digit = (i%(10*tens))/tens;
            //o1(i);
            dp[i] = min(dp[i],dp[i-digit]+1);
            tens *= 10;
        }
    }
    // for(ll i = 0; i < n; i++) {
    //     cout << dp[i] << ' ';
    // }
    cout << dp[n];
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
