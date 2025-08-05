#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef complex<ll> P;

#define X real()
#define Y imag()
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define sz size
#define reach cout << "Reached" << endl;
#define o1(a) cout << a << "\n"
#define o2(a, b) cout << a << ' ' << b << "\n";
#define iArray(a, n) for (ll i = 0; i < n; i++) cin >> a[i];
#define i2(a, b) cin >> a >> b;
#define oArray(a,n) for(ll i=0; i<n; i++) cout << a[i] << ' '; cout << endl;

const ll MOD = 1000000007;

void solve(vector<int>& v, int start){
    int n = v.size();
    if(n==1){
        cout << v[0];
        return;
    }
    if(n==0){
        return;
    }
    vector<int> new_v;
    int new_start = 0;
    if(start>0){
        new_v.pb(v[0]);
    }
    for(int i=start; i<n; i++){
        cout << v[i] << ' ';
        ++i;
        if(i<n) new_v.push_back(v[i]);
        else{
            new_start = 1;
        }
    }
    solve(new_v,new_start);
}

void sol(){
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i=1; i<=n; i++){
        v[i-1] = i;
    }
    solve(v,1);
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}

