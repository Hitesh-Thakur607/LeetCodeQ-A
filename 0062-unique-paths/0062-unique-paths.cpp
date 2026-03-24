class Solution {
public:
vector<vector<int>>dp;
int paths(int m,int n,int i,int j){
    if(j>=n||i>=m){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==m-1&&j==n-1){
        return 1;
    }
    int count=0;
    count+=paths(m,n,i+1,j);
    count+=paths(m,n,i,j+1);
    
    return dp[i][j]=count;
}
    int uniquePaths(int m, int n) {
        dp.resize(m+1,vector<int>(n,-1));
        return paths(m,n,0,0);
    }
};