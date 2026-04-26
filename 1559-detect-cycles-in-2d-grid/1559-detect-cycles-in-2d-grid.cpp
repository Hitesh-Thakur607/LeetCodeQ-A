class Solution {
public:
    bool iscycle(vector<vector<bool>>& visited,
                 vector<vector<char>>& grid,
                 int i, int j,
                 int pi, int pj,
                 char tar) {
        int n = grid.size(), m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m) return false;
        if(grid[i][j] != tar) return false;
        if(visited[i][j]) return true;
        visited[i][j] = true;
        vector<pair<int,int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
        for(auto &d : dirs){
            int ni = i + d.first;
            int nj = j + d.second;
            if(ni == pi && nj == pj) continue;
            if(iscycle(visited, grid, ni, nj, i, j, tar)){
                return true;
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false)); // 👈 moved here
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j]){
                    if(iscycle(visited, grid, i, j, -1, -1, grid[i][j])){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};