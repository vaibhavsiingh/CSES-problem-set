#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n;
    cin >> n;
    if(n==1){
        cout << "1";
        return;
    }
    if(n==2 || n==3){
        cout << "NO SOLUTION";
        return;
    }
    if(n==4){
        cout << "3 1 4 2";
        return;
    }
    for(ll i = 1; i <= n; i+=2) {
        cout << i << " ";
    }
    for(ll i = 2; i <= n; i+=2) {
        cout << i << " ";
    }
}
 
    
 
int main(){
    sol();
    return 0;
}