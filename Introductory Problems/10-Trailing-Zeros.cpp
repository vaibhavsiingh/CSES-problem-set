#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n,count=0;
    cin >> n;
    for(ll i = 5; i <= n; i*=5) {
        for(ll j=i; j<=n; j+=i){
            count ++;
        }
    }
    cout << count;
}
 
 
 
    
 
int main(){
 
    sol();
    return 0;
}