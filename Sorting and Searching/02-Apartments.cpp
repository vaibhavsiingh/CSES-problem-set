#include<bits/stdc++.h>
using namespace std;
typedef int ll;
 
void sol(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0, ans = 0;
    while(i < n && j < m){
        if(a[i] - k <= b[j] && a[i] + k >= b[j]){
            ans++;
            i++;
            j++;
        } else if(a[i] - k > b[j]){
            j++;
        } else {
            i++;
        }
    }
 
    cout << ans << endl;
}
 
int main(){
    sol();
    return 0;
}