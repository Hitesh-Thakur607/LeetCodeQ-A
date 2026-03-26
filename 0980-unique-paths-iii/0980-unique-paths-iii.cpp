class Solution {
public:
    int findpath(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>&check,int count,int target){
        if(i>=grid.size()||j>=grid[0].size()||j<0||i<0){
            return 0;
        }
        if(check[i][j] || grid[i][j]==-1){
            return 0;
        }
        if(grid[i][j]==2){
            if(count==target) return 1;
            return 0;
        }

        check[i][j]=true;

        int counti=0;
        counti+=findpath(grid,i+1,j,check,count+1,target);
        counti+=findpath(grid,i,j+1,check,count+1,target);
        counti+=findpath(grid,i,j-1,check,count+1,target);
        counti+=findpath(grid,i-1,j,check,count+1,target);
        check[i][j]=false;
        return counti;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int si=0,sj=0;
        int target=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    si=i;
                    sj=j;
                }
                if(grid[i][j]==0){
                    target++;
                }
            }
        }
        target += 1; 
        vector<vector<bool>>check(grid.size(),vector<bool>(grid[0].size(),false));
        return findpath(grid,si,sj,check,0,target);
    }
};