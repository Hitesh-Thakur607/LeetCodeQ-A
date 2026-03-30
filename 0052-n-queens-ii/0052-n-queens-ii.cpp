class Solution {
public:
bool isvalid(vector<string>&queen,int row,int col){
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

int total(vector<string>&queen,int idx,int queencount,int n){
    if(queencount==n){
        return 1;
    }
    if(idx>=n){
        return 0;
    }
    int val=0;
    for(int i=idx;i<n;i++){
        for(int j=0;j<n;j++){
            if(isvalid(queen,i,j)){
                queen[i][j]='Q';
                val+=total(queen,i+1,queencount+1,n);
                queen[i][j]='.';   
            }
        }
    }
    return val;
}
    int totalNQueens(int n) {
    vector<string> queen(n, string(n, '.'));
    return total(queen,0,0,n);
    }
};