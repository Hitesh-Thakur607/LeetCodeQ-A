class Solution {
public:
vector<vector<string>>ans;
bool isvalid(vector<string>& queen, int row, int col) {
    int n = queen.size();
    for(int i = 0; i < row; i++) {
        if(queen[i][col] == 'Q') return false;
    }
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if(queen[i][j] == 'Q') return false;
    }
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if(queen[i][j] == 'Q') return false;
    }
    return true;
}
void ways(vector<string>&queen,int n,int count,int idx){
    if(count==n){
        ans.push_back(queen);
        return ;
    }
    if(idx>=n){
    //  cout<<"sizegreater"<<endl;
        return ;
    }
    for(int i=idx;i<n;i++){
        // cout<<"notvalid"<<endl;
        for(int j=0;j<n;j++){
            if(isvalid(queen,i,j)){
                queen[i][j]='Q';
                ways(queen,n,count+1,i+1);
                queen[i][j]='.';
            }
    
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
    vector<string> queen(n, string(n, '.'));
        ways(queen,n,0,0);
        return ans;
    }
};
