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
    ll price[n],pages[n];
    for(ll i = 0; i < n; i++) {
        cin >> price[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> pages[i];
    }

    
    vector<ll> v(x+1,0);
    for(ll i = 0; i < n; i++) {
        for(ll j=x; j>=price[i]; j--){
            v[j] = max(v[j],v[j-price[i]]+pages[i]);
        }
    }
    cout << v[x];
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
