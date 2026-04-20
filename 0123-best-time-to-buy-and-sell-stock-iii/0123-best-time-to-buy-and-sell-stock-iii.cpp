class Solution {
public:
vector<vector<vector<int>>> dp;
int sell(vector<int>&prices,int count,int idx,int holding){
    if(idx >= prices.size()){
        return 0;
    }
    if(count == 2){
        return 0;
    }
    if(dp[idx][holding][count] != -1){
        return dp[idx][holding][count];
    }
    int one = 0;
    int three = 0;
    if(holding == 0){
        int buy = sell(prices, count, idx+1, 1) - prices[idx];
        int skip = sell(prices, count, idx+1, 0);
        return dp[idx][holding][count] = max(buy, skip);
    } else {
        int sell_stock = prices[idx] + sell(prices, count+1, idx+1, 0);
        int hold = sell(prices, count, idx+1, 1);
        return dp[idx][holding][count] = max(sell_stock, hold);
    }
}

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    dp.resize(n, vector<vector<int>>(2, vector<int>(3, -1)));
    return sell(prices, 0, 0, 0);
}
};