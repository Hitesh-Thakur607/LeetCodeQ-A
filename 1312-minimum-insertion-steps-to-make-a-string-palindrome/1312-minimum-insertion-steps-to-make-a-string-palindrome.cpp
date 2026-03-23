class Solution {
public:
vector<vector<int>>dp;
int mini(string& s,int i,int j){
    if(i>=j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==s[j]){
       return dp[i][j]=mini(s,i+1,j-1);
    }
        return dp[i][j]=1+min(mini(s,i+1,j),mini(s,i,j-1));
}
    int minInsertions(string s) {
        dp.resize(s.size(),vector<int>(s.size(),-1));
        return mini(s,0,s.size()-1);
    }
};
