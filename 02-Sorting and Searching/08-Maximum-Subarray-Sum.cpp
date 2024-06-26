#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n;
    cin >> n;
    ll array[n];
    for(ll i=0; i<n; i++) cin >> array[i];
  ll best = array[0], sum = 0;
for (ll k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";
}
 
    
 
int main(){
    sol();
    return 0;
}