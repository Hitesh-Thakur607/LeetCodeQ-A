class Solution {
public:
int maxi=INT_MAX;
void allpath(vector<vector<int>>& grid,int maxvalue,int i,int j,vector<vector<bool>>&visited ,vector<vector<int>>&val){
    if(i==grid.size()-1&&j==grid[0].size()-1){
        maxvalue=max(grid[i][j],maxvalue);
        maxi=min(maxi,maxvalue);
        return ;
    }
    if(i>=grid.size()||i<0||j>=grid[0].size()||j<0){
        return ;
    }
    if(val[i][j]>maxvalue){
        val[i][j]=maxvalue;
    }
    else{
        return ;
    }
    if(visited[i][j]){
        return ;
    }
    visited[i][j]=true;
    maxvalue=max(grid[i][j],maxvalue);
    allpath(grid,maxvalue,i+1,j,visited,val);
    allpath(grid,maxvalue,i-1,j,visited,val);
    allpath(grid,maxvalue,i,j+1,visited,val);
    allpath(grid,maxvalue,i,j-1,visited,val);
    visited[i][j]=false;
}
    int swimInWater(vector<vector<int>>& grid) {
       vector<vector<int>> val(grid.size(), vector<int>(grid[0].size(), INT_MAX));
       vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        allpath(grid,0,0,0,visited,val);
        return maxi;
    }
};