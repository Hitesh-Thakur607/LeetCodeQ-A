class Solution {
public:
vector<vector<int>>dp;
int mini(string &word1,string &word2,int i,int j){
        if(i == word1.size()) return word2.size() - j;
        if(j == word2.size()) return word1.size() - i;

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(word1[i]==word2[j]){
        return dp[i][j]=mini(word1,word2,i+1,j+1);
    }
    return dp[i][j]=1+min(mini(word1,word2,i+1,j),mini(word1,word2,i,j+1));
}
    int minDistance(string word1, string word2) {
        dp.resize(501,vector<int>(501,-1));
        return mini(word1,word2,0,0);
    }
};
