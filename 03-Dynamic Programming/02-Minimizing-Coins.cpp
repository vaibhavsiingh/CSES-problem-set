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
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll req[x+1];
    req[0]=0;
    for(ll i=1; i<=x; i++){
        req[i]=1000000008;
        for(ll j = 0; j < n; j++) {
            if(i-a[j]<0) continue;
            req[i] = min(req[i],req[i-a[j]]+1);
        }
    }
    (req[x]>1000000007) ? o1(-1):o1(req[x]);
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
