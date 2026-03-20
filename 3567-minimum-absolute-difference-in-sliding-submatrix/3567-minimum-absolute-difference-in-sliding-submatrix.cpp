class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        vector<vector<int>>ans;
        for(int i = 0; i + k <= grid.size(); i++){
            vector<int>anso;
            for(int m = 0; m + k <= grid[0].size(); m++){
                vector<int>temp;
                for(int j = i; j < i + k; j++){
                    for(int l = m; l < m + k; l++){
                        temp.push_back(grid[j][l]);
                    }
                }
                sort(temp.begin(), temp.end());
                int newans = INT_MAX;
                for(int x = 1; x < temp.size(); x++){
                    if(temp[x] == temp[x-1]) continue;   
                        newans = min(newans, temp[x] - temp[x-1]);
                    }
                    if(newans == INT_MAX) newans = 0;
                        if(temp.size() <= 1) newans = 0;    
                            anso.push_back(newans);
            }
            ans.push_back(anso);
        }
        return ans;
    }
};