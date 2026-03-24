class Solution {
public:
vector<vector<int>>dp;
int paths(vector<vector<int>>& o,int m,int n,int i,int j){
    if(j>=n||i>=m){
        return 0;
    }
    if(o[i][j]==1){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==m-1&&j==n-1){
        return 1;
    }
    int count=0;
    count+=paths(o,m,n,i+1,j);
    count+=paths(o,m,n,i,j+1);
    
    return dp[i][j]=count;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        dp.resize(obstacleGrid.size()+1,vector<int>(obstacleGrid[0].size()+1,-1));
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        return paths(obstacleGrid,m,n,0,0);
    }
};
