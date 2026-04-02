class Solution {
public:
vector<vector<int>>dp;
int lcs(string &a,string &b,int i,int j){
    if(i>=a.size()||j>=a.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(a[i]==b[j]){
        return dp[i][j]=1+lcs(a,b,i+1,j+1);
    }
    return dp[i][j]=max(lcs(a,b,i+1,j),lcs(a,b,i,j+1));
}
    int longestPalindromeSubseq(string s) {
        string b=s;
        dp.resize(s.size()+1,vector<int>(s.size()+1,-1));
        reverse(s.begin(),s.end());
        return lcs(s,b,0,0);
    }
};
