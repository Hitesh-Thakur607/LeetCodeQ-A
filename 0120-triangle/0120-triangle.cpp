class Solution {
public:
    vector<vector<int>> dp;
    int tri(vector<vector<int>>& triangle, int i, int j){
        if(i == triangle.size() - 1){
            return triangle[i][j];
        }
        if(dp[i][j] != INT_MAX){
            return dp[i][j];
        }
        int down = tri(triangle, i+1, j);
        int diag = tri(triangle, i+1, j+1);
        return dp[i][j] = triangle[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        dp.resize(triangle.size(), vector<int>(triangle.back().size(), INT_MAX));
        return tri(triangle, 0, 0);
    }
};