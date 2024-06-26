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
    ll a[n];
    ll sum =0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        sum+= a[i];
    }

    set<ll> s;
    
    vector<bool> dp(sum+1,0);
    dp[0] = 1;
    for(ll i=0; i<n; i++){
        for(ll j=sum; j>=a[i]; j--){
            if(!dp[j]){
                 dp[j] = dp[j-a[i]];
                 if(dp[j]) s.insert(j);
            }            
        }
    }

    o1(s.size());
    for(auto i = s.begin(); i != s.end(); i++) {
        cout << *i << ' ';
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
