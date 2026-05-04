class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>mat(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                mat[j].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<mat.size();i++){
            reverse(mat[i].begin(),mat[i].end());
            matrix[i]=mat[i];              
        }
    }
};