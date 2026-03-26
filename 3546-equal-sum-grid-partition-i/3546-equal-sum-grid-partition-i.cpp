class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long>vertisumfront;
         vector<long long>vertisumback;
         vector<long long>horzi;
          vector<long long>horzi1;
            long long sum=0;
        for(int i=0;i<grid.size()-1;i++){
            for(int j=0;j<grid[i].size();j++){
                sum+=grid[i][j];
            }
            vertisumfront.push_back(sum);
        }
         sum=0;
        for(int i=grid.size()-1;i>=1;i--){
            for(int j=0;j<grid[i].size();j++){
                sum+=grid[i][j];
            }
            vertisumback.push_back(sum);
        }
        sum=0;
        for(int i=0;i<grid[0].size()-1;i++){
            for(int j=0;j<grid.size();j++){
                sum+=grid[j][i];
            }
            horzi.push_back(sum);
        }
        sum=0;
        for(int i=grid[0].size()-1;i>0;i--){
            for(int j=0;j<grid.size();j++){
                sum+=grid[j][i];
            }
            horzi1.push_back(sum);
        }
        int idx=vertisumback.size()-1;
        for(int i=0;i<vertisumfront.size();i++){
            if(vertisumfront[i]==vertisumback[idx--]){
                return true;
            }
        }
        idx=horzi1.size()-1;
        for(int i=0;i<horzi.size()&&idx>=0;i++){
            if(horzi[i]==horzi1[idx--]){
                return true;
            }
        }
        return false;
    }
};

