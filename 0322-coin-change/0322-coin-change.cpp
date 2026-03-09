class Solution {
public:
    vector<int> dp;
    int minamo(vector<int>& coins,int amount,long long sum){
        if(sum > amount) return INT_MAX;
        if(sum == amount) return 0;
        if(dp[sum] != -1) return dp[sum];
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int val = minamo(coins,amount,sum+coins[i]);
            if(val != INT_MAX)
                mini = min(mini,val+1);
        }
        return dp[sum] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount+1,-1);
        int ans = minamo(coins,amount,0);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};