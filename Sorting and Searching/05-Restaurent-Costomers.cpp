#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(){
    ll n,max=0,current=0;
    cin >> n;
    ll in[n],out[n];
    for(ll i=0; i<n; i++) cin >> in[i] >> out[i];
    sort(in,in+n);
    sort(out,out+n);
    ll ptr1=0,ptr2=0;
    while(ptr1 < n){
        if(in[ptr1] < out[ptr2]){
            current++;
            ptr1++;
            if(max < current) max = current;
        }
        else{
            current--;
            ptr2++;
        }
    }
    cout << max;
 
}
 
    
 
int main(){
    sol();
    return 0;
}