#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    string s;
    cin >> s;
    map<char,ll> m;
    for(ll i = 0; i < s.length(); i++) {
        m[s[i]]++;
        
    }
    ll nodd=0;
    
    
    char odd;
    for(auto x:m){
        
        if(x.second%2==1) {nodd++;odd = x.first;}
    }
    if(s.length()%2==0 && nodd>0){
        cout << "NO SOLUTION";
        return;
    }
    if(s.length()%2==1 && nodd>1){
        cout << "NO SOLUTION";
        return;
    }
    
 
    for(auto x:m){
        for(int i=0; i<x.second/2; i++){
            cout << x.first;
        }
    }
    if(s.length()%2==1){
        cout << odd;
    }
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        for (int i = 0; i < it->second / 2; ++i) {
            cout << it->first;
        }
    }
 
 
 
 
}
 
int main(){
 sol();
}
