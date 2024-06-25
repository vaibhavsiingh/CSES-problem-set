#include<bits/stdc++.h>
#include<numeric>
#include<algorithm>
using namespace std;
typedef long long int ll;
 
void sol(){
    set<int> s;
    ll n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}
 
int main(){
    sol();
}