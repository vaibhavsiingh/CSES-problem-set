#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n;
    cin >> n;
    
    string v(n,'0');
    
    ll count = 0;
    ll total = pow(2,n);
    set<string> s;
    ll mvp = n-1;
 
    while(count<total){
        if(v[mvp]=='1') v[mvp]= '0';
        else v[mvp] = '1';
        if(s.count(v)){
            if(v[mvp]=='1') v[mvp]= '0';
            else v[mvp] = '1';
            mvp--;
        }
        else{
            s.insert(v);
            count++;
            cout << v << "\n";
            mvp = n-1;
        }
    }
}
 
int main(){
 
    sol();
    return 0;
}