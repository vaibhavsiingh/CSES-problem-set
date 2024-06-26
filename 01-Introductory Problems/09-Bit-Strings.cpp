#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll MOD = 1000000007;
    ll n;
    cin >>n;
    ll ans = 1;
for(ll i = 0; i < n; i++) {
    ans = (ans*2)%MOD;
}
cout << ans;
 
}
 
 
 
    
 
int main(){
 
    sol();
    return 0;
}