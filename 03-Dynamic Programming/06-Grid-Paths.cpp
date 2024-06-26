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
    char mat[n][n];
    for(ll i = 0; i < n; i++) {
        for(ll j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }
    ll dp[n][n];
    dp[0][0] = 1;
    for(ll i = 0; i < n; i++) {
        for(ll j=0; j<n; j++){
            if(mat[i][j]=='*')dp[i][j]=0;
            else if(i==0 && j>0 ) dp[i][j] = dp[i][j-1];
            else if(i>0 && j==0)dp[i][j] = dp[i-1][j];
            else if(i>0 && j>0){
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%1000000007;
               
            }
            
        }
    }
    o1(dp[n-1][n-1]);
    // for(ll i = 0; i < n; i++) {
    //     for(ll j=0; j<n; j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << "\n";
    // }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
