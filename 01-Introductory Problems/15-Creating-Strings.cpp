#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void sol(string s,ll fixed,set<string> &set){
    if(fixed == s.length()-1){
        if(set.count(s)==0){set.insert(s);}
    }    
    else{
        for(int i=fixed+1; i<s.length();i++){
            swap(s[fixed+1],s[i]);
            sol(s,fixed+1, set);
            swap(s[fixed+1],s[i]);
        }
    }
}
 
int main() {
    string s;
    cin >> s;
    set<string> set;
    
    sol(s,-1, set );
    cout << set.size() << "\n";
        for (auto it = set.begin(); it != 
                             set.end(); ++it)
        cout << *it << "\n";
    
}