class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    bool found=true;
                    for(int k=0;k<mat.size();k++){
                        if(k!=i&&mat[k][j]==1||mat[k][j]==-1){
                            mat[k][j]=-1;
                            found=false;
                        }
                    }
                    for(int l=0;l<mat[i].size();l++){
                        if(l!=j&&mat[i][l]==1||mat[i][l]==-1){
                            mat[i][l]=-1;
                            found=false;
                        }
                    }
                    if(found){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};