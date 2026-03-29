class Solution {
public:
    int m, n;
    int ans;
    vector<vector<vector<bool>>> visited;
    void dfs(vector<vector<int>>& grid, int i, int j, int currXor) {
        currXor ^= grid[i][j];
        if(visited[i][j][currXor]) return;
        visited[i][j][currXor] = true;
        if(i == m-1 && j == n-1) {
            ans = min(ans, currXor);
            return;
        }
        if(i + 1 < m)
            dfs(grid, i + 1, j, currXor);
        if(j + 1 < n)
            dfs(grid, i, j + 1, currXor);
    }
    int minCost(vector<vector<int>>& grid) {
      m = grid.size();
        n = grid[0].size();
        ans = INT_MAX;
         visited.assign(m, vector<vector<bool>>(n, vector<bool>(1024, false)));
        dfs(grid, 0, 0, 0);
        return ans;       
    }
};