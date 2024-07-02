#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;

void solve(vector<vector<char>>& grid, vector<vector<int>>& visited, int i, int j, int n, int m){
    stack<pair<int, int>> stk;
    stk.push({i, j});
    vector<pair<int, int>> direc = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    while(!stk.empty()){
        int x = stk.top().first, y = stk.top().second;
        stk.pop();
        for(auto d : direc){
            int nx = x + d.first, ny = y + d.second;
            if(nx >= 0 && ny >= 0 && nx < n && ny < m){
                if(visited[nx][ny] == 0 && grid[nx][ny] != '#'){
                    visited[nx][ny] = 1;
                    stk.push({nx, ny});
                }
            }
        }
    }
}

void sol(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && visited[i][j] == 0){
                visited[i][j] = 1;
                solve(grid, visited, i, j, n, m);
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sol();
    return 0;
}
