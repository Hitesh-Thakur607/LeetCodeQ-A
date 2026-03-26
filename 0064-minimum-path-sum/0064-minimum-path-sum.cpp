class Solution {
public:
vector<vector<int>>dp;
int pathsum(vector<vector<int>>& grid,int i,int j){
    if(i>=grid.size()||j>=grid[i].size()){
        return -1;
    }
    if(i==grid.size()-1&&j==grid[i].size()-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int right=pathsum(grid,i,j+1);
    int left=pathsum(grid,i+1,j);
    if(right==-1||left==-1){
        return dp[i][j]=grid[i][j]+(right==-1?left:right);
    }
    // cout<<min(left,right)<<endl;
    return dp[i][j]=grid[i][j]+min(left,right);
}
    int minPathSum(vector<vector<int>>& grid) {
        dp.resize(grid.size(),vector<int>(grid[0].size(),-1));
        return pathsum(grid,0,0);
    }
};