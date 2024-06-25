#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<string> place(vector<string> qq, pair<ll,ll>p){
    vector<string> v = qq;
    v[p.first][p.second] = 'Q';
    ll x=p.first+1,y=p.second+1;
    while(x<8 && y<8){
        if(v[x][y]=='.'){
                v[x][y]='*';
        }
        x++;
        y++;
    }
    x=p.first-1,y=p.second-1;
    while(x>=0 && y>=0){
        if(v[x][y]=='.'){
                v[x][y]='*';
        }
        x--;
        y--;
    }
    x=p.first+1,y=p.second-1;
    while(x<8 && y>=0){
        if(v[x][y]=='.'){
                v[x][y]='*';
        }
        x++;
        y--;
    }
    x=p.first-1,y=p.second+1;
    while(x>=0 && y<8){
        if(v[x][y]=='.'){
                v[x][y]='*';
        }
        x--;
        y++;
    }
    for(ll i=0; i<8; i++){
        if(v[i][p.second]=='.'){
            v[i][p.second]='*';
        }
    }
    for(ll i=0; i<8; i++){
        if(v[p.first][i]=='.'){
            v[p.first][i]='*';
        }
    }
    return v;
 
 
}
 
vector<ll> find(vector<string> qq, ll i){
    vector<string> v = qq;
    vector<ll> ans;
        for(ll j=0; j<8; j++){
            if(v[i][j]=='.') ans.push_back(j);
        }
    return ans;
}
 
void sol(vector<string> qq, ll queens, ll &count ){
    if(queens == 7){
        vector<ll> p = find(qq,7);
        if(p.size() == 0) return;
        count += p.size();
        return;
    }
    else{
        vector<ll> p = find(qq,queens);
        for(auto x:p){
            sol(place(qq, {queens,x}),queens+1,count);
        }
        
    }
    
 
}
 
    
 
int main(){
    vector<string> v(8);
    for(ll i=0; i<8; i++){
        cin >> v[i];
    }
    ll count = 0;
    sol(v,0,count);
    cout << count;
 
 
}
