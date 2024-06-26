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
    ll n,x;
    i2(n,x);
    ll a[n];
    ll MOD = 1000000007;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ways[x+1];
    ways[0] = 1;
    for(ll i=1; i<=x; i++){
        ways[i] = 0;
        for(ll j=0; j<n; j++){
            if(i-a[j]<0) continue;
            ways[i] += ways[i-a[j]]%MOD;
        }
    }
    cout << ways[x]%MOD;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
