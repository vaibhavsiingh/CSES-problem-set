#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n,m;
    cin >> n >>m;
    multiset<ll> s;
    for(ll i = 0; i < n; i++) {
        ll in;
        cin >> in;
        s.insert(in);
    }
    while(m--){
        ll maxi;
        cin >> maxi;
        auto it = s.upper_bound(maxi);
        if(it==s.begin()){
            cout << -1 << "\n";
        }
        else {
			cout << *(--it) << "\n";
			s.erase(it);
		}
    }
}
 
int main(){
    sol();
    return 0;
}