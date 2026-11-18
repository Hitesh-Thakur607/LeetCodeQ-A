class Solution {
public:
vector<vector<int>>mat{{-1,0},{0,-1},{1,0},{0,1}};
void dfs(vector<vector<char>>& grid,int i,int j, vector<vector<bool>>&visited){
    if(grid[i][j]=='0'){
        return ;
    }
    visited[i][j]=true;
    for(int k=0;k<mat.size();k++){
        int idx=i+mat[k][0];
        int jdx=j+mat[k][1];
        if(idx>=0&&jdx>=0&&jdx<grid[0].size()&&idx<grid.size()&&!visited[idx][jdx]&&grid[idx][jdx]!='0'){
            dfs(grid,idx,jdx,visited);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int island=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!visited[i][j]&&grid[i][j]!='0'){
                    dfs(grid,i,j,visited);
                    island++;
                }
            }
        }
        return island;
    }
};