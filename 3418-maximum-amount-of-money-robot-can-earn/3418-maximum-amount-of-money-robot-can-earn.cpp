class Solution {
public:
vector<vector<vector<int>>>dp;
int amount(vector<vector<int>>& coins,int i,int j,int count){
    if(i==coins.size()-1&&j==coins[i].size()-1){
        if(coins[i][j]<0&&count>0){
            return 0;
        }
        return coins[i][j];
    }
    if(dp[i][j][count]!=INT_MIN){
        return dp[i][j][count];
    }
    if(i>=coins.size()||j>=coins[i].size()){
        return INT_MIN;
    }
    int one=0;
    int two=INT_MIN;
    one=coins[i][j]+max(amount(coins,i+1,j,count),amount(coins,i,j+1,count));
    if(coins[i][j]<0&&count>0){
        two=max(amount(coins,i+1,j,count-1),amount(coins,i,j+1,count-1));       
    }
    return dp[i][j][count]=max(one,two);
}   
    int maximumAmount(vector<vector<int>>& coins) {
        dp.resize(coins.size()+1,vector<vector<int>>(coins[0].size()+1,vector<int>(3, INT_MIN)));
        return amount(coins,0,0,2);
    }
};
