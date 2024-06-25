#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(vector<ll> v, ll &min, ll sum1, ll sum2, ll fixed){
    if(fixed == v.size()){
        if(abs(sum1-sum2)<min) min = abs(sum1-sum2);
       // cout << sum1 << ' ' << sum2 << ' ' << min << "\n";
    }
    else{
        sol(v,min,sum1+v[fixed],sum2,fixed+1);
        sol(v,min,sum1,v[fixed]+sum2,fixed+1);
    }
}
 
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    cout <<"\n";
    ll min = v[0];
    sol(v,min,0,0,0);
    cout << min;
}
