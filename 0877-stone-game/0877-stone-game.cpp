class Solution {
public:
vector<vector<int>>dp;
int maxi(vector<int>&piles,int i,int j,int len){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==j){
        return piles[i];
    }
    int one=piles[i]+min(maxi(piles,i+1,j-1,len),maxi(piles,i+2,j,len));
    int two=piles[j]+min(maxi(piles,i+1,j-1,len),maxi(piles,i,j-2,len));
    return dp[i][j]=max(one,two);
}
    bool stoneGame(vector<int>& piles) {
        dp.resize(piles.size(),vector<int>(piles.size(),-1));
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        int alicesum=maxi(piles,0,piles.size()-1,piles.size());
        if(sum-alicesum>alicesum){
            return false;
        }
        return true;
    }
};