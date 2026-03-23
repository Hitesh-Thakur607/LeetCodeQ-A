class Solution {
public:
vector<vector<int>>dp;
int largest(string& text1,string& text2,int i,int j){
    if(i>=text1.size()||j>=text2.size()){
        return 0;
    }   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(text1[i]==text2[j]){
        // cout<<text1[i]<<endl;
        return dp[i][j]=1+largest(text1,text2,i+1,j+1);
    }

      int first= largest(text1,text2,i+1,j);
      int second=  largest(text1,text2,i,j+1);
        return dp[i][j]=max(first,second);
}
    int longestCommonSubsequence(string text1, string text2) {
        dp.resize(text1.size()+1,vector<int>(text2.size()+1,-1));
        return largest(text1,text2,0,0);
    }
};