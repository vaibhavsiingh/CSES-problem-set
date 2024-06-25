#include<bits/stdc++.h>
using namespace std;
typedef int ll;
 
void sol(){
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(ll i =0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    ll ptr1=0,ptr2=n-1,ans=0;
    while(ptr1<ptr2){
       // cout << a[ptr1] << ' ' << a[ptr2] << "\n";
        if(a[ptr1]+a[ptr2] <= x ) {
            ans++;
            ptr1++;
            ptr2--;            
        }
        else{
            ans++;
            ptr2--;
        }
    }
    if(ptr1==ptr2) ans++;
    cout << ans;
}
 
int main(){
    sol();
    return 0;
}