#include<bits/stdc++.h>
#include<numeric>
#include<algorithm>
using namespace std;
typedef long long int ll;
 
bool sortFnc(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.second < p2.second;
}
 
void sol(){
    int n;
    cin >> n;
    pair<int,int> p[n];
    for(int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n,sortFnc);
    int time=0,movies=0;
    for(int i=0; i<n; i++){
        if(time <= p[i].first){
            time = p[i].second;
            movies++;
        }
        // cout << p[i].first << ' ' << p[i].second << "\n";
    }
    cout << movies;
}
 
int main(){
    sol();
}
