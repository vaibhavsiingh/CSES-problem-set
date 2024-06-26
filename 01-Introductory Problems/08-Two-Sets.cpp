#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    if(sum%2!=0){
        cout << "NO";
        return;
    }
    cout << "YES\n";
    vector<bool> v(n,true);
    ll req = sum/2, current = 0, size = 0;
    for(ll i = n; current < req ; i--) {
        if(req - current > i){
            current += i;
            v[i-1]=false;
            size++;
        }
        else{
            v[req - current-1] = false;
            current = req;
            size ++;
        }
    }
    cout << size <<"\n";
    for(ll i = 0; i < n; i++) {
        if(!v[i]) cout << i+1 << " ";
    }
    cout << "\n";
    cout << n-size << "\n";
    for(ll i = 0; i < n; i++) {
        if(v[i]) cout << i+1 << " ";
    }
    
}
 
 
 
    
 
int main(){
 
    sol();
    return 0;
}
